#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.hpp"

class	HumanA: public Weapon
{
	std::string	name;
public:
	HumanA();
	HumanA(std::string n, Weapon &w);
	~HumanA();
	void	attack();

};

#endif
