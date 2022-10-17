#ifndef FORM_HPP
#define FORM_HPP

#include <cstdlib>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	const std::string	_name;
	const int			_myGrade;
	const int			_exeGrade;
	void				validateGrade();
	bool				_signed;
public:
	Form();
	Form(std::string name, int grade, int exe);
	Form(Form &oldForm);
	~Form();

	void 		operator= (Form &oldForm);
	void		beSigned(Bureaucrat &b);

	const std::string getConstName();
	std::string getName();
	int			getGrade();
	int			getExeGrade();
	int			getSigned();
	//
	void			executeFree (Bureaucrat& executor);
	void			execute (const Bureaucrat& executor) const;
	void			checkExecution(Bureaucrat& executor) const;
	virtual void	executeAction() const = 0;
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