#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
	:Form("PresidentForm", 25, 5),
	_target("detarget")
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
	:Form("PresidentForm", 25, 5),
	_target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &oldForm)
	:Form("PresidentForm", 25, 5),
	_target(oldForm._target)
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
	std::cout << _target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
