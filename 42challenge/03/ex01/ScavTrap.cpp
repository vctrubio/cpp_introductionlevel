#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap()
{
	name = "DefaultScavy";
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << name <<" ScavTrap Default Constructor" << std::endl;
}

ScavTrap::ScavTrap(std::string str)
{
	name = str;
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	
	std::cout << name << " ScavTrap Created Constructor" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &oldScavTrap)
	:ClapTrap(oldScavTrap.name)
{
	hitPoints = oldScavTrap.hitPoints;
	energyPoints = oldScavTrap.energyPoints;
	attackDamage = oldScavTrap.attackDamage;
	std::cout << "ScavTrap Copied Constructor" << std::endl;
}

ScavTrap& ScavTrap::operator= (const ScavTrap &oldScavTrap)
{
	name = oldScavTrap.name;
	hitPoints = oldScavTrap.hitPoints;
	energyPoints = oldScavTrap.energyPoints;
	attackDamage = oldScavTrap.attackDamage;

	std::cout << "ScavTrap Copied Operator" << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Descrutor Operator" << std::endl;
}
//

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << name << " have enterred in Gate keeper mode" << std::endl;
}

void	ScavTrap::attack(std::string const &target)
{
	if (hitPoints > 0 && energyPoints > 0)
	{
		energyPoints--;
		std::cout << "ScavTrap " << name << " attack " << \
		target << " causing " << attackDamage << " points of damage" << std::endl;
	}
	else
	{
		std::cout << name << " cant attack " << std::endl;
	}
}