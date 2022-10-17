#include "ClapTrap.hpp"

int main()
{
	ClapTrap bot1;
	ClapTrap bot2("Robocop");
	ClapTrap bot4("Alexa");

	bot1.attack("Robocop");
	bot2.takeDamage(2);

	bot4.takeDamage(11);

	bot2.takeDamage(50);
	bot2.takeDamage(50);
	bot2.beRepaired(4);

}
