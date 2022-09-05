#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Bureaucrat.hpp"
#include "Form.hpp"

class PresidentialPardonForm: public Form
{
	std::string	_target;
public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	~PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm &oldForm);
	PresidentialPardonForm& operator=(const PresidentialPardonForm &oldForm);

	std::string	getTarget();
	void		executeAction()const;
};


#endif