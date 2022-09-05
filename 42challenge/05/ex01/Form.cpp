#include "Form.hpp"

Form::Form()
	: _name("Default Form"),
	  _myGrade(42),
	  _exeGrade(149),
	  _signed(false)
{
}

Form::Form(std::string name, int grade, int exe)
	: _name(name),
	  _myGrade(grade),
	  _exeGrade(exe),
	  _signed(false)
{
	validateGrade();
	std::cout << _name << " Constructed\n";
}

Form::Form(Form &oldForm)
	:_name(oldForm._name),
	_myGrade(oldForm._myGrade),
	_exeGrade(oldForm._exeGrade),
	_signed(false)
{
	std::cout << "Copied Constructor\n";
}

Form::~Form()
{
	std::cout << "Deconsturct\n";
}

void Form::operator=(Form &oldForm)
{
	_signed = oldForm._signed;
}

//
void Form::validateGrade()
{
	if (_myGrade < 1 || _exeGrade < 1)
		throw (GradeTooHighException());
	if (_myGrade > 150 || _exeGrade < 0)
		throw (GradeTooLowException());

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
	output << f.getName() << " || ExeGrade: " << f.getExeGrade() << " myGrade: " << f.getGrade() << " Signed (" << f.getSigned() << ") " << std::endl
		   << std::endl;

	return (output);
}
