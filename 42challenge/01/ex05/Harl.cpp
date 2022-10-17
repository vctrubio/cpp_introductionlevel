#include "Harl.hpp"

Harl::Harl()
{
	std::cout << "Welcome Harl" << std::endl;
}

Harl::~Harl()
{
	std::cout << "Bi Harl" << std::endl;
}

void	Harl::debug(void)
{
	std::cout << "DEBUGGING- Where is my source?" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "INFO- Where is my source code?" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "WARNING- I'm telling you if I do not get my code. OH Man Oh man" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "ERORR- I'm telling you we're gonna have a problem around here. You act like you've never seen a HarlPerson before" << std::endl;
}


void	Harl::complain(std::string level)
{
	int	i;
	
	void	(Harl::*ft[4])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error,
	};
	i = level.length() - 1;
	(this->*ft[i])();
}
