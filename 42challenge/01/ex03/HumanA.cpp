#include "HumanA.hpp"

HumanA::HumanA(std::string n, Weapon &w)
{
	_name = n;
	_weapon = &w;
}

HumanA::~HumanA()
{
	std::cout << "Bye" + _name << std::endl;
}

void	HumanA::attack(void)
{
	std::cout << _name + " attacks with his " + _weapon->getType() << std::endl;
}
