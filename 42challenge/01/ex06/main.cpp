#include "Karen.hpp"


int main(int ac, char **av)
{
	Karen	kk;

	if (ac != 2)
	{
		std::cout << "Read the instruction" << std::endl;
		exit(191);
	}
	kk.complain(av[1]);
}
