#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
	:Form("ShrubberyForm", 145, 137),
	_target("detarget")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	:Form("ShrubberyForm", 145, 137),
	_target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &oldForm)
	:Form("ShrubberyForm", 145, 137),
	_target(oldForm._target)
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
