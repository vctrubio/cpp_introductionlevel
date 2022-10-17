#include "Harl.hpp"

Harl::Harl()
{
	std::cout << "Welcome Harl" << std::endl;
}

Harl::~Harl()
{
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
	std::cout << "ERROR- I'm telling you we're gonna have a problem around here. You act like you've never seen a HarlPerson before" << std::endl;
}


void	Harl::complain(std::string level)
{
	int		i = -1;
	std::string	msg = "DIWE";

	void	(Harl::*ft[4])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error,
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
