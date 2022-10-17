#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

#include "Form.hpp"

class Form;
class Bureaucrat
{
	const std::string _name;
	int _grade;

public:
	Bureaucrat();
	~Bureaucrat();
	Bureaucrat(std::string name, int nb);
	Bureaucrat(Bureaucrat &bureaucrat);
	Bureaucrat& operator=(const Bureaucrat &oldB);
	Bureaucrat operator--(int);
	Bureaucrat operator--();
	Bureaucrat operator++(int);
	Bureaucrat operator++();

    void		signForm(Form &form);
	void 		gradeUp(int i);
	void 		gradeDown(int i);
	std::string getName();
	int 		getGrade();

	void		executeForm(const Form& form);
};

class GradeTooHighException : public std::exception
{
public:
	const char *what() const throw()
	{
		return "Bureaucrat: Grade too high";
	}
};

class GradeTooLowException : public std::exception
{
public:
	const char *what() const throw()
	{
		return "Bureaucrat: Grade too low";
	}
};

class NotSignedException : public std::exception
{
public:
	const char *what() const throw()
	{
		return "Form: Document not signed";
	}
};

std::ostream &operator<<(std::ostream &output, Bureaucrat &b);

#endif
