#include "Karen.hpp"


int main()
{
	Karen	k;
	int	i;

	i = 0;
	while (43)
	{
		std::cout << "Hi Karen, press a number from 1-5 to explore your personalities" << std::endl;
		std::cin >> i;
		if (i == 1)
			k.complain("a");
		else if (i == 2)
			k.complain("ab");
		else if (i == 3)
			k.complain("abc");
		else if (i == 4)
			k.complain("abcd");
		else if (i == 5)
			break;
		else
			std::cout << "Are you deaf? Please" << std::endl;
	}

}
