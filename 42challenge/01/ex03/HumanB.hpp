#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"

class	HumanB: public Weapon
{
	std::string	name;
public:
	HumanB(){};
	~HumanB(){};
	void	attack();

};

#endif
