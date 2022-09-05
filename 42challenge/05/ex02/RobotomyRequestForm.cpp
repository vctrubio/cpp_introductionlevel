#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
	:_target("detarget"),
	Form("RobotomyForm", 137, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	:_target(target),
	Form("RobotomyForm", 137, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &oldForm)
	:_target(oldForm._target),
	Form("RobotomyForm", 137, 45)
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
	// std::cout << nb << " rand()\n";
	if (nb == 1)
		std::cout << _target << " has been robotorized\n";
	else
		throw (FailCreateRobFile());
}

