#include "Karen.hpp"

Karen::Karen()
{
	std::cout << "Welcome Karen" << std::endl;
}

Karen::~Karen()
{
	std::cout << "Bi Karen" << std::endl;
}

void	Karen::debug(void)
{
	std::cout << "DEBUGGING- Where is my source?" << std::endl;
}

void	Karen::info(void)
{
	std::cout << "INFO- Where is my source code?" << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "WARNING- I'm telling you if I do not get my code. OH Man Oh man" << std::endl;
}

void	Karen::error(void)
{
	std::cout << "EROR- I'm telling you we're gonna have a problem around here. You act like you've never seen a karenPerson before" << std::endl;
}


void	Karen::complain(std::string level)
{
	int	i;

	//pointer to a ft
	//pointer to a ft
	void	(Karen::*ft[4])(void) = {
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error,
	};
	i = level.length() - 1;
	(this->*ft[i])();
}
