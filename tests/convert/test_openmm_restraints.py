import sire as sr
import pytest


@pytest.mark.skipif(
    "openmm" not in sr.convert.supported_formats(),
    reason="openmm support is not available",
)
def test_openmm_positional_restraints(kigaki_mols):
    mols = kigaki_mols

    mol = mols[0]

    map = {"space": sr.vol.Cartesian(), "platform": "Reference"}

    # test restraining all C atoms
    restraints = sr.restraints.positional(mol, atoms="element C")

    assert len(restraints) == len(mol.atoms("element C"))

    coords = []

    for restraint, atom in zip(restraints, mol.atoms("element C")):
        assert restraint.is_atom_restraint()
        assert restraint.position() == atom.coordinates()
        assert restraint.r0().is_zero()
        coords.append(atom.coordinates())

    d = mol.dynamics(restraints=restraints, timestep="4fs", map=map)

    d.run("1ps")

    mol = d.commit()

    for atom, coords in zip(mol.atoms("element C"), coords):
        assert (atom.coordinates() - coords).length() < 0.1 * sr.units.angstrom


@pytest.mark.skipif(
    "openmm" not in sr.convert.supported_formats(),
    reason="openmm support is not available",
)
def test_openmm_distance_restraints(ala_mols):
    mols = ala_mols

    mols = mols[0:2]

    map = {"space": sr.vol.Cartesian(), "platform": "Reference"}

    # test restraining the distance between the first and last molecule
    restraints = sr.restraints.distance(
        mols, atoms0=mols[0][0], atoms1=mols[-1][0], r0="5A"
    )

    assert len(restraints) == 1

    # check that we get the same result using bond restraints
    restraints2 = sr.restraints.bond(
        mols, atoms0=mols[0][0], atoms1=mols[-1][0], r0="5A"
    )

    assert len(restraints2) == 1

    assert restraints == restraints2

    assert restraints[0].is_atom_restraint()
    assert restraints[0].r0() == sr.u("5A")

    # need to minimise the energy to get the restraint to work
    mols = mols.minimisation(restraints=restraints, map=map)()

    d = mols.dynamics(restraints=restraints, timestep="4fs", map=map)

    d.run("10ps")

    mols = d.commit()

    new_coords = [mols[0][0].coordinates(), mols[-1][0].coordinates()]

    assert (new_coords[0] - new_coords[1]).length().value() == pytest.approx(
        5.0, 1e-2
    )


@pytest.mark.skipif(
    "openmm" not in sr.convert.supported_formats(),
    reason="openmm support is not available",
)
def test_openmm_fixed_atoms(kigaki_mols):
    mols = kigaki_mols

    mol = mols[0]

    map = {"space": sr.vol.Cartesian(), "platform": "Reference"}

    # test fixing all C atoms
    coords = []

    for atom in mol.atoms("element C"):
        coords.append(atom.coordinates())

    d = mol.dynamics(fixed="element C", timestep="1fs", map=map)

    d.run("1ps")

    mol = d.commit()

    for atom, coords in zip(mol.atoms("element C"), coords):
        assert (
            atom.coordinates() - coords
        ).length() < 0.001 * sr.units.angstrom
