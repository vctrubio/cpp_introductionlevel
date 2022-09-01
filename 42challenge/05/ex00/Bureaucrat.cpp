#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
	: name("Default B"), grade(1)
{
}

Bureaucrat::Bureaucrat(std::string name, int nb)
	: name(name)
{
	if (nb > 150)
		throw (GradeTooLowException());
	if (nb < 1)
		throw (GradeTooHighException());
	grade = nb;
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(Bureaucrat &bureaucrat)
{
    *this = bureaucrat;
	// this->grade = 100;
}


Bureaucrat& Bureaucrat::operator= (const Bureaucrat &oldB)
{
	grade = oldB.grade;
	return (*this);
}

//
Bureaucrat Bureaucrat::operator--(int)
{
	gradeDown(1);
	return (*this);
}
Bureaucrat Bureaucrat::operator--()
{
	gradeDown(1);
	return (*this);
}

Bureaucrat Bureaucrat::operator++(int)
{
	gradeUp(1);
	return (*this);
}
Bureaucrat Bureaucrat::operator++()
{
	gradeUp(1);
	return (*this);
}

//
void Bureaucrat::gradeUp(int i)
{
	if (grade + i > 150)
		throw(GradeTooLowException());
	grade += i;
}

void Bureaucrat::gradeDown(int i)
{
	if (grade - i < 1)
		throw(GradeTooHighException());
	grade -= i;
}

std::string Bureaucrat::getName()
{
	return (name);
}

int Bureaucrat::getGrade()
{
	return (grade);
}

//
std::ostream& operator<<(std::ostream& output, Bureaucrat& b)
{
	output << b.getName() << " : " << b.getGrade() << std::endl;
	return (output);
}
