# include "PhoneBook.hpp"

void	PhoneBook::contact(int i)
{
	Contact	*c;
	std::string	ui;

	c = &contacts[i];
	while (1) 
	{
		std::cout << "Enter Firstname: " << std::endl;
		getline(std::cin, ui);
		if (verify_string(ui))
		{
			c->setFirstname(ui);
			break;
		}
		else
			std::cout << "I don't accept that. ";
	}
	while (1)
	{
		std::cout << "Enter Lastname: " << std::endl;
		getline(std::cin, ui);
		if (verify_string(ui))
		{
			c->setLastname(ui);
			break;
		}
		else
			std::cout << "I don't accept that. ";
	}
	while (1)
	{
		std::cout << "Enter Nickname: " << std::endl;
		getline(std::cin, ui);
		if (verify_string(ui))
		{
			c->setNickname(ui);
			break;
		}
		else
			std::cout << "I don't accept that. ";
	}
	while (1)
	{
		std::cout << "Enter Phone: " << std::endl;
		getline(std::cin, ui);
		if (verify_number(ui))
		{
			c->setPhone(ui);
			break;
		}
		else
			std::cout << "I don't accept that. ";
	}
	while (1)
	{
		std::cout << "Enter Dark Dark Secret: " << std::endl;
		getline(std::cin, ui);
		if (verify_string(ui))
		{
			c->setSecret(ui);
			break;
		}
		else
			std::cout << "I don't accept that. ";
	}
}

void	PhoneBook::show(int i)
{
	Contact	*c;
	int		k;

	k = 0;
	c = &contacts[k];
	if (i == 0)
		std::cout << "\nNo Contacts to show you\n";
	else
		for (int k = 0; k < NMAX; k++)
		{
			if (c[k].isEmpty() == 0)
				break;
			c[k].printContact(k);
		}
}