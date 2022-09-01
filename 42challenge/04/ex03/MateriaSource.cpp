#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < INVENTORY; i++)
		inventory[i] = 0;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < INVENTORY; i++)
		if (inventory[i] != 0)
			delete inventory[i];
}

MateriaSource::MateriaSource(const MateriaSource &oldMateriaSource)
{
	for (int i = 0; i < INVENTORY; i++)
	{
		if (oldMateriaSource.inventory[i] != 0)
		{
			inventory[i] = oldMateriaSource.inventory[i]->clone();
			delete oldMateriaSource.inventory[i];
		}
		else
			inventory[i] = 0;
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &oldMateriaSource)
{
	for (int i = 0; i < INVENTORY; i++)
	{
		if (oldMateriaSource.inventory[i] != 0)
		{
			inventory[i] = oldMateriaSource.inventory[i]->clone();
			delete oldMateriaSource.inventory[i];
		}
		else
			inventory[i] = 0;
	}
	return (*this);
}
//

void		MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < INVENTORY; i++)
		if (inventory[i] == 0)
		{
			inventory[i] = m;
			return;
		}
}

AMateria*	MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < INVENTORY; i++)
		if (inventory[i] != 0 && inventory[i]->getType() == type)
			return (inventory[i]->clone());
	return (0);
}
