#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string str);
	ScavTrap(const ScavTrap &oldScavTrap);
	ScavTrap& operator= (const ScavTrap &oldScavTrap);
	~ScavTrap();

	void 	guardGate(void);
	void	attack(std::string const &target);
};

#endif