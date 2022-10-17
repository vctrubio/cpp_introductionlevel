#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
	: _name("Default Burrito"), _grade(1)
{
}

Bureaucrat::Bureaucrat(std::string name, int nb)
	: _name(name)
{
	if (nb > 150)
		throw(GradeTooLowException());
	if (nb < 1)
		throw(GradeTooHighException());
	_grade = nb;
	std::cout << _name << " created\n";
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Deconstructor\n";
}

Bureaucrat::Bureaucrat(Bureaucrat &bureaucrat)
{
	*this = bureaucrat;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &oldB)
{
	_grade = oldB._grade;
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
	if (_grade + i > 150)
		throw(GradeTooLowException());
	_grade += i;
	std::cout << "New Grade: " << _grade << std::endl;
}

void Bureaucrat::gradeDown(int i)
{
	if (_grade - i < 1)
		throw(GradeTooHighException());
	_grade -= i;
	std::cout << "New Grade: " << _grade << std::endl;
}

std::string Bureaucrat::getName()
{
	return (_name);
}

int Bureaucrat::getGrade()
{
	return (_grade);
}
//
void Bureaucrat::signForm(bool status, std::string name)
{
	if (status == false)
		std::cout << "Señor " << _name << ", was not good to sign " << name << " because of bad grade" << std::endl;
	else
		std::cout << "Señor " << _name << ", succesfully signed " << name << std::endl;
}

//
std::ostream &operator<<(std::ostream &output, Bureaucrat &b)
{
	output << b.getName() << " : " << b.getGrade() << std::endl;
	return (output);
}
