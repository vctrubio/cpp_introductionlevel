#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
	:_target("detarget"),
	Form("PresidentForm", 25, 5)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	:_target(target),
	Form("PresidentForm", 25, 5)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &oldForm)
	:_target(oldForm._target),
	Form("PresidentForm", 25, 5)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm& ShrubberyCreationForm::operator= (const ShrubberyCreationForm &oldForm)
{
	_target = oldForm._target;
	return (*this);
}

void ShrubberyCreationForm::executeAction( void ) const
{
	std::cout << _target << " tbd" << std::endl;
}
