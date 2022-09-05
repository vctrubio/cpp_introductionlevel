#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
	: _target("detarget"),
	  Form("ShrubberyForm", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: _target(target),
	  Form("ShrubberyForm", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &oldForm)
	: _target(oldForm._target),
	  Form("ShrubberyForm", 145, 137)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &oldForm)
{
	_target = oldForm._target;
	return (*this);
}

void ShrubberyCreationForm::executeAction(void) const
{
	std::ofstream file;
	std::string name = _target + "_shrubbery";

	file.open(name);
	if (!file)
		throw (FailCreateFile());
	else
	{
		std::cout << "Is open file\n";
		file << " |" << std::endl
			 << "| |" << std::endl
			 << " | |" << std::endl
			 << "| | |" << std::endl;
	}
	file.close();
}
