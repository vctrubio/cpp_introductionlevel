#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

DiamondTrap::DiamondTrap()
{
	name = "MixMatchDiamondTrap";
	ClapTrap::name = name + "_clap_name";
	hitPoints = FragTrap::hitPoints;
	energyPoints = ScavTrap::energyPoints;
	attackDamage = FragTrap::attackDamage;
	std::cout << "DiamondTrap default constructor" << std::endl;
}

DiamondTrap::DiamondTrap(std::string str)
{
	name = str;
	ClapTrap::name = name + "_clap_name";
	hitPoints = FragTrap::hitPoints;
	energyPoints = ScavTrap::energyPoints;
	attackDamage = FragTrap::attackDamage;
	std::cout << "DiamondTrap Default Constructor" << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap &oldDiamondTrap )
{
	name = oldDiamondTrap.name;
	ClapTrap::name = name + "_clap_name";
	hitPoints = oldDiamondTrap.hitPoints;
	energyPoints = oldDiamondTrap.energyPoints;
	attackDamage = oldDiamondTrap.attackDamage;
	std::cout << "DiamondTrap " << name << " copy Concstructor" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << name << " Decontructor" << std::endl;
}

void DiamondTrap::whoAmI( void )
{
	std::cout << "WHOAMI: " << name << ", linked to ClapTrap: " << ClapTrap::name << std::endl;
}

void DiamondTrap::attack( std::string const &target )
{
	std::cout << "ATTACKING FROM SCAVTRAP: ";
	this->ScavTrap::attack( target );
}
