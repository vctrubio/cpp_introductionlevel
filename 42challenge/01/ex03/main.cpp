#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA hun("hun", club);
		hun.attack();
		club.setType("some OTHER type of club");
		hun.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB fill("fill");
		fill.setWeapon(club);
		fill.attack();
		club.setType("some OTHER type of club");
		fill.attack();
	}
}

