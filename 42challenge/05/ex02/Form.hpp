#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
	std::string	_name;
	int			_myGrade;
	int			_exeGrade;
	bool		_signed;
public:
	Form();
	Form(std::string name, int grade, int exe);
	Form(Form &oldForm);
	~Form();

	void 	operator= (Form &oldForm);
	void	beSigned(Bureaucrat &b);

	std::string getName();
	int			getGrade();
	int			getExeGrade();
	int			getSigned();
};

class FormGradeTooHighException : public std::exception
{
public:
	const char *what() const throw()
	{
		return "Form: Grade too high";
	}
};

class FormGradeTooLowException : public std::exception
{
public:
	const char *what() const throw()
	{
		return "Form: Grade too low";
	}
};

std::ostream &operator<<(std::ostream &output, Form &f);

#endif