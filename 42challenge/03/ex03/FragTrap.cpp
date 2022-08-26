#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap()
{
	name = "DefaultScavy";
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << name <<" FragTrap Default Constructor" << std::endl;
}

FragTrap::FragTrap(std::string str)
{
	name = str;
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	
	std::cout << name << " FragTrap Created Constructor" << std::endl;
}

FragTrap::FragTrap(const FragTrap &oldFragTrap)
	:ClapTrap(oldFragTrap.name)
{
	hitPoints = oldFragTrap.hitPoints;
	energyPoints = oldFragTrap.energyPoints;
	attackDamage = oldFragTrap.attackDamage;
	std::cout << "FragTrap Copied Constructor" << std::endl;
}

FragTrap& FragTrap::operator= (const FragTrap &oldFragTrap)
{
	name = oldFragTrap.name;
	hitPoints = oldFragTrap.hitPoints;
	energyPoints = oldFragTrap.energyPoints;
	attackDamage = oldFragTrap.attackDamage;

	std::cout << "FragTrap Copied Operator" << std::endl;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Descrutor Operator" << std::endl;
}
//

void	FragTrap::highFiveGuys(void)
{
	std::cout << "FragTrap " << name << " gives you a positive high high 5" << std::endl;
}
