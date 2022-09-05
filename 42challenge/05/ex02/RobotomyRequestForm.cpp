#include "RobotomyRequestForm.hpp"

#include "PresidentialPardonForm.hpp"


RobotomyRequestForm::RobotomyRequestForm()
	:_target("detarget"),
	Form("PresidentForm", 25, 5)
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	:_target(target),
	Form("PresidentForm", 25, 5)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &oldForm)
	:_target(oldForm._target),
	Form("PresidentForm", 25, 5)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm& RobotomyRequestForm::operator= (const RobotomyRequestForm &oldForm)
{
	_target = oldForm._target;
	return (*this);
}

void RobotomyRequestForm::executeAction( void ) const
{
	std::cout << _target << " tbd" << std::endl;
}
