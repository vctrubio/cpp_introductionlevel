#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
	:Form("RobotomyForm", 137, 45),
	_target("detarget")
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	:Form("RobotomyForm", 137, 45),
	_target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &oldForm)
	:Form("RobotomyForm", 137, 45),
	_target(oldForm._target)
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
	std::cout << " zzzzzzdrillllllzzzzzzz" << std::endl;
	srand(time(NULL));
	int nb = rand() % 2;
	if (nb == 1)
		std::cout << _target << " has been robotorized\n";
	else
		throw (FailCreateRobFile());
}

