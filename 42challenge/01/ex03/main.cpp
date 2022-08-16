#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	Weapon	w("banan");
	HumanA	a("lolo", w);
	// HumanB	b;

	a.attack();
	// b.attack();
}

