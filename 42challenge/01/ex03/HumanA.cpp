#include "HumanA.hpp"

HumanA::HumanA(std::string n, Weapon &w)
	: name (n), Weapon(w)
{}

HumanA::HumanA()
{
	name = "unamed";
	type = "pistol";
}

HumanA::~HumanA()
{
	std::cout << "ByeHumanA| ";
}

void	HumanA::attack(void)
{
	std::cout << name + " attacks with his " + type << std::endl;
}
