#include "Bureaucrat.hpp"

int main()
{
	try
	{
	Bureaucrat	*iA = new Bureaucrat("Ashley", 2);
	(*iA)--;
	std::cout << iA->getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

}