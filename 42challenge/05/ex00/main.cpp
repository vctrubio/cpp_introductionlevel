#include "Bureaucrat.hpp"

int main()
{
	// Bureaucrat	iB;
	// Bureaucrat	*iA = new Bureaucrat("Ashley", 2);

	// Bureaucrat *c = iA;

	// (*iA)--;
	// std::cout << "Start\n" << iA->getGrade() << std::endl;;
	// std::cout << "1: " << c->getName() <<  c->getGrade() << std::endl;;

	try 
	{
		Bureaucrat	iP("IPA", 212);
		std::cout << "Succes\n";
	}
	catch(std::exception& b) {
		std::cout << b.what() << std::endl;
	}
	std::cout << "SI\n";

	Bureaucrat	m("milly", 2);

	std::cout << m;
}