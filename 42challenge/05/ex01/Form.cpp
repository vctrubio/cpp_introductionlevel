#include "Form.hpp"

Form::Form()
{
	_name = "Default Form name";
	_myGrade = 42;
	_signed = false;
}

Form::Form(std::string name, int grade, int exe)
{
	_name = name;
	_signed = false;

	if (grade < 1)
		throw(FormGradeTooLowException());
	else if (grade > 150)
		throw(FormGradeTooHighException());
	_myGrade = grade;

	if (exe < 1)
		throw(FormGradeTooLowException());
	else if (exe > 150)
		throw(FormGradeTooHighException());
	_exeGrade = exe;
}

Form::Form(Form &oldForm)
{
	_name = oldForm._name;
	_myGrade = oldForm._myGrade;
	_exeGrade = oldForm._exeGrade;
	_signed = false;
}

Form::~Form()
{
}

void Form::operator=(Form &oldForm)
{
	_signed = oldForm._signed;
}

//
std::string Form::getName()
{
	return (_name);
}
int Form::getGrade()
{
	return (_myGrade);
}
int Form::getExeGrade()
{
	return (_exeGrade);
}
int Form::getSigned()
{
	return (_signed);
}

void Form::beSigned(Bureaucrat &b)
{
	if (b.getGrade() >= getGrade())
	{
		b.signForm(_signed, _name);
		throw FormGradeTooLowException();
	}
	else
	{
		if (_signed)
			std::cout << b.getName() << " Already signed this form!\n";
		else
		{
			_signed = true;
			b.signForm(_signed, _name);
		}
	}
}

//
std::ostream &operator<<(std::ostream &output, Form &f)
{
	output << "ExeGrade: " << f.getExeGrade() << "\nmyGrade: " << f.getGrade() << "\nSigned (" << f.getSigned() << ") " << f.getName() << \
	std::endl << std::endl;

	return (output);
}
