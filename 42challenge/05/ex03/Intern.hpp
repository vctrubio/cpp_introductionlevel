#ifndef INTERN_HPP
#define INTERN_HPP

# include <iostream>
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "Form.hpp"
# define SIZE 6


class Intern
{
public:
	Intern();
	Intern(const Intern &oldIntern);
	Intern &operator=(const Intern &oldIntern);
	~Intern();

	Form *makeForm(std::string s1, std::string s2);
};

#endif