#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP


# include <iostream>
# include <iomanip>
# include <string>

class	ClapTrap
{
	std::string	name;
	int		hitPoints;
	int		energyPoints;
	int		attackDamage;
public:
	ClapTrap(std::string str);
	ClapTrap(const ClapTrap &oldClapTrap);
	ClapTrap& operator= (const ClapTrap &oldClapTrap);
	~ClapTrap();

	void	attack(std::string const &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};




#endif
