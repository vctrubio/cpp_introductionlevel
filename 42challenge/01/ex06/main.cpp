#include "Harl.hpp"


int main(int ac, char **av)
{
	Harl	h;

	if (ac != 2)
	{
		std::cout << "Read the instruction" << std::endl;
		exit(191);
	}
	h.complain(av[1]);
}
