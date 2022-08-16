#include "Zombie.hpp"


int main(int ac, char **av)
{
	Zombie	*tst;

	if (ac < 2 || ac > 8)
	{
		std::cout << "Please give correct ac to beging \n";
		exit(1);
	}
	tst = zombieHorde(ac, "LIKO");
	delete []tst;
	return (0);
}