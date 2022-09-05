#include "Array.hpp"

int main()
{
	int size = 2;
	Array<float> i(size);
	Array<int> tmp2(size);

	try
	{
		int tmp;
		i[1] = 2;
		tmp = i[1];
		std::cout << tmp << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		for (int b = 0; b < size; b++)
		{
			tmp2[b] = static_cast<int>(i[b]);
			std::cout << "copy assign = " << tmp2[b] << std::endl;
		}
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}