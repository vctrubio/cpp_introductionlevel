#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm()
	:_target("detarget"),
	Form("PresidentForm", 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
	:_target(target),
	Form("PresidentForm", 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &oldForm)
	:_target(oldForm._target),
	Form("PresidentForm", 25, 5)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm& PresidentialPardonForm::operator= (const PresidentialPardonForm &oldForm)
{
	_target = oldForm._target;
	return (*this);
}

void PresidentialPardonForm::executeAction( void ) const
{
	std::cout << target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
