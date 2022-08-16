# include "phoneBook.hpp"

int main(int ac, char **av)
{
	Book		book;
	int			i;
	std::string	ui;

	i = 0;
	while (42)
	{
		std::cout << "\nMyPhoneBook-  MENU  - 'ADD' / 'SEARCH' / 'EXIT'\n";		
		getline(std::cin, ui);
		if (ui == "EXIT")
			break;
		else if (ui == "ADD")
		{
			if (i >= NMAX)
				i %= NMAX; 
			book.contact(i++);
		}
		else if (ui == "SEARCH")
		{
			book.show(i);
			//search by index
		}
		else
			std::cout << "Please try again \n";
	}
	return (0);
}
