#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.hpp"

class	HumanA: virtual public Weapon
{
	Weapon		*_weapon;
	std::string	_name;
public:
	HumanA(){};
	HumanA(std::string n, Weapon &w);
	~HumanA();
	void	attack();
};

#endif
