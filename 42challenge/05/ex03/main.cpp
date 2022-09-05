#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

/*
ShrubberyCreationForm (Required grades: sign 145, exec 137)
RobotomyRequestForm (Required grades: sign 72, exec 45)
PresidentialPardonForm (Required grades: sign 25, exec 5)
*/

int main(int ac, char **av)
{
	std::string str;
	str = av[1];
	
	if (str.compare("hi"))
		std::cout << "HI\n";
}