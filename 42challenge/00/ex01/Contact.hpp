#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>

class	Contact
{
	std::string	firstname;
	std::string	lastname;
	std::string	nickname;
	std::string	phone;
	std::string	secret;
public:
	Contact(){}
	~Contact(){}
	void	printContact(int i);
	void	setFirstname(std::string str);
	void	setLastname(std::string str);
	void	setNickname(std::string str);
	void	setPhone(std::string str);
	void	setSecret(std::string str);
	bool	isEmpty() {return firstname.length();};
};

int		verify_number(std::string &str);
int		verify_string(std::string &str);

#endif 

