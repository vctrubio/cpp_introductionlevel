#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	std::string _target;

public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	~ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm &oldForm);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &oldForm);

	std::string getTarget();
	void executeAction() const;
};

class FailCreateFile : public std::exception
{
public:
	const char *what(void) const throw()
	{
		return ("Failed to create _shrubbery");
	}
};

#endif