#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include	"Contact.hpp"
# define	NMAX 8


class	PhoneBook
{
	Contact	contacts[NMAX];
public:
	PhoneBook(){}
	~PhoneBook(){}
	void	contact(int i);
	void	show(int i);
};


#endif