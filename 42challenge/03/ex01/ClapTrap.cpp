#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string str)
{
	name = str;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
	
	std::cout << name << " Created Constructor" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &oldClapTrap)
	:name(oldClapTrap.name),
	hitPoints(oldClapTrap.hitPoints),
	energyPoints(oldClapTrap.energyPoints),
	attackDamage(oldClapTrap.attackDamage)
{
	std::cout << "Copied Constructor" << std::endl;
}

ClapTrap& ClapTrap::operator= (const ClapTrap &oldClapTrap)
{
	name = oldClapTrap.name;
	hitPoints = oldClapTrap.hitPoints;
	energyPoints = oldClapTrap.energyPoints;
	attackDamage = oldClapTrap.attackDamage;

	std::cout << "Copied Operator" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Descrutor Operator" << std::endl;
}
//

void	ClapTrap::attack(std::string const &target)
{
	if (hitPoints > 0 && energyPoints > 0)
	{
		std::cout << "ClapTrap " << name << " attack " << \
		target << " causing " << attackDamage << " points of damage" << std::endl;
	}
	else
	{
		std::cout << name << " cant attack " << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoints > 0)
	{
		hitPoints -= amount;
		std::cout << name << " Taken " << amount << " damage\n";
	}
	else
	{
		std::cout << "Man " << name << " has " << hitPoints << " Cannot take " << \
		amount << " damage\n";
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	hitPoints += amount;
	std::cout << name << " was repaired: " << amount << std::endl;
}





