#include "Iter.hpp"

int	main(void)
{
	int			intArray[] = {-5, 33, 140, 3, 4, 5, 22};
	char a[7] = "abcdef"; 

	iter(intArray, 8, tester);
    std::cout << std::endl;
	iter(a, 3, tester);
	return (0);
}