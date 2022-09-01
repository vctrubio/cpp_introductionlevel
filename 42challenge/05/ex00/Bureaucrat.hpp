#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
	const std::string name;
	int grade;

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

	void 		gradeUp(int i);
	void 		gradeDown(int i);
	std::string getName();
	int 		getGrade();
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

std::ostream &operator<<(std::ostream &output, Bureaucrat &b);

#endif