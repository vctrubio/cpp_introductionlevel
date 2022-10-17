#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Standard Intern\n";
}

Intern::Intern(const Intern &oldIntern)
{
	*this = oldIntern;
}

Intern &Intern::operator=(const Intern &oldIntern)
{
	(void)oldIntern;
	return (*this);
}

Intern::~Intern()
{
}

/// the first representing the name of a form, and the second one being the target for the form
Form*	Intern::makeForm(std::string s1, std::string s2)
{
	if (!s1.compare("RobotomyRequestForm"))
		return (new RobotomyRequestForm(s2));
	else if (!s1.compare("PresidentialPardonForm"))
		return (new PresidentialPardonForm(s2));
	else if (!s1.compare("ShrubberyCreationForm"))
		return (new ShrubberyCreationForm(s2));
	else
		std::cout << "Form does not exist\n";
	return (0);
}
