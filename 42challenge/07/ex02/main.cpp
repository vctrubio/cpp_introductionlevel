#include "Array.hpp"

int main()
{
	int size = 2;
	Array<float> i(size);
    // Array<int> tmp2 = static_cast<Array*>(&i); How to do this- fuck sake

	int tmp;

	try
	{
		i[1] = 2;
		tmp = i[1];
		std::cout << tmp << std::endl;
		std::cout << i.size() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}