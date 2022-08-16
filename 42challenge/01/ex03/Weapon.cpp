#include "Weapon.hpp"

Weapon::Weapon(void)
{
}

Weapon::Weapon(std::string type)
{
	_type = type;
}

Weapon::~Weapon()
{
	std::cout << _type << " Weapon desconstructor\n";
}

void	Weapon::setType(std::string type)
{
	_type = type;
}

