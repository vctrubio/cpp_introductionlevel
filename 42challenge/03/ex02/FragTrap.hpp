#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string str);
	FragTrap(const FragTrap &oldFragTrap);
	FragTrap& operator= (const FragTrap &oldFragTrap);
	~FragTrap();

	void	FragTrap::highFiveGuys(void);
};

#endif