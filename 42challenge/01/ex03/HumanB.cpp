#include "HumanB.hpp"

HumanB::~HumanB()
{
	std::cout << "Bye" + _name << std::endl;
}

void	HumanB::attack(void)
{
	std::cout << _name + " attacks with his " + _weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &w)
{
	_weapon = &w;
}