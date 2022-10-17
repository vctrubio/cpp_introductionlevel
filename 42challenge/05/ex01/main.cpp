#include "Form.hpp"

void	tryBureacrat()
{
	try
	{
		Bureaucrat b("Billy", 24);
		b.gradeUp(15);
		b++;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	// try
	// {
	// 	// Bureaucrat b("BillyWorm", 24);
	// 	Bureaucrat c = b;
	// }
	// catch(std::exception &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }

};

void	tryForm()
{
	try
	{
		Form f("Forming", 22, 22);
		Bureaucrat d("DEMO", 21);
		f.beSigned(d);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

};

int main(void)
{
	// tryBureacrat();
	tryForm();
	return (0);
}
