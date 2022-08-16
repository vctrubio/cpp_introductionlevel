#include "Weapon.hpp"

Weapon::Weapon(void)
{
}

Weapon::Weapon(std::string type)
{
	this->type = type;
}

Weapon::~Weapon()
{
	std::cout << type << " desconstruct\n";
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}

