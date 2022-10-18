#include "Contact.hpp"

void	Contact::printContact(int i)
{
	std::cout << std::setfill(' ') << std::setw(10);
	std::cout << i << "|";
	std::cout << std::setfill(' ') << std::setw(10);
	std::cout << firstname << "|";
	std::cout << std::setfill(' ') << std::setw(10);
	std::cout << lastname << "|";
	std::cout << std::setfill(' ') << std::setw(10);
	std::cout << nickname << "|";
	std::cout << std::setfill(' ') << std::setw(10);
	std::cout << phone << "|";
	std::cout << std::setfill(' ') << std::setw(10);
	std::cout << secret << "|";
	std::cout << std::endl;
}

void	Contact::setFirstname(std::string str)
{
	firstname = str;
}

void	Contact::setLastname(std::string str)
{
	lastname = str;
}

void	Contact::setNickname(std::string str)
{
	nickname = str;
}

void	Contact::setPhone(std::string str)
{
	phone = str;
}

void	Contact::setSecret(std:: string str)
{
	secret = str;
}

int	verify_number(std::string &str)
{
	int	i;

	i = 0;
	if (str[i] == '+' || std::isdigit(str[i]))
		i++;
	else
		return (0);
	while (i < (int)str.length())
	{
		if (!std::isdigit(str[i++]))
			return (0);
	}
	if (str.length() > 10)
		str = (str.substr(0, 9) + ".");
	return (1);
}

int	verify_string(std::string &str)
{
	if (str.length() == 0)
		return (0);
	if (str.length() > 10)
		str = (str.substr(0, 9) + ".");
	return (1);
}
