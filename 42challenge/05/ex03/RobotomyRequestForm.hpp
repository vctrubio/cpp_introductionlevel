#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
class RobotomyRequestForm: public Form
{
	std::string	_target;
public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	~RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm &oldForm);
	RobotomyRequestForm& operator=(const RobotomyRequestForm &oldForm);

	std::string	getTarget();
	void		executeAction()const;
};

class FailCreateRobFile : public std::exception
{
public:
	const char *what(void) const throw()
	{
		return ("Failed to create _robotomy");
	}
};

#endif