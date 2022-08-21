#include "Karen.hpp"

Karen::Karen()
{
	std::cout << "Welcome Karen" << std::endl;
}

Karen::~Karen()
{
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
	std::cout << "ERROR- I'm telling you we're gonna have a problem around here. You act like you've never seen a karenPerson before" << std::endl;
}


void	Karen::complain(std::string level)
{
	int		i = -1;
	std::string	msg = "DIWE";

	void	(Karen::*ft[4])(void) = {
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error,
	};

	if (level == "DEBUG"
		|| level == "INFO"
		|| level == "WARNING"
		|| level == "ERROR")
		i = msg.find(level.substr(0, 1));
	switch (i)
	{
		case 0:
			(this->*ft[i++])();
		case 1:
			(this->*ft[i++])();
		case 2:
			(this->*ft[i++])();
		case 3:
		{
			(this->*ft[i++])();
			break;
		}
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;

	}

}
