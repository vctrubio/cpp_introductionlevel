#include "Character.hpp"

Character::Character()
	: name("xCharacter")
{
	for (int i = 0; i < INVENTORY; i++)
		inventory[i] = 0;
}

Character::~Character()
{
	for (int i = 0; i < INVENTORY; i++)
		delete inventory[i];
}

Character::Character(std::string name)
	: name(name)
{
	for (int i = 0; i < INVENTORY; i++)
		inventory[i] = 0;
}

Character::Character(const Character &oldCharacter)
	: name(oldCharacter.name)
{
	for (int i = 0; i < INVENTORY; i++)
	{
		if (oldCharacter.inventory[i] != 0)
			inventory[i] = oldCharacter.inventory[i]->clone();
		else
			inventory[i] = 0;
	}
}

Character &Character::operator=(const Character &oldCharacter)
{
	name = oldCharacter.name;
	for (int i = 0; i < INVENTORY; i++)
		if (inventory[i] != 0)
			delete inventory[i];
	for (int i = 0; i < INVENTORY; i++)
	{
		if (oldCharacter.inventory[i] != 0)
			inventory[i] = oldCharacter.inventory[i]->clone();
		else
			inventory[i] = 0;
	}
	return (*this);
}

//
std::string const& Character::getName() const
{
	return (name);
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < INVENTORY; i++)
	{
		if (inventory[i] == 0)
		{
			inventory[i] = m;
			std::cout << "inventory: " << i << "has been set\n";
			//? return ;
		}
	}
};

void Character::unequip(int idx)
{
	if (idx >= 0 && idx <= INVENTORY && inventory[idx] != 0)
		inventory[idx] = 0;
};

void Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx <= INVENTORY && inventory[idx] != 0)
		inventory[idx]->use(target);
};