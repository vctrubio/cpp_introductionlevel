#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

/*
ShrubberyCreationForm (Required grades: sign 145, exec 137)
RobotomyRequestForm (Required grades: sign 72, exec 45)
PresidentialPardonForm (Required grades: sign 25, exec 5)
*/

int main()
{
    Bureaucrat  bob("bob", 1);
    Intern      betinho;
    Form        *robot;
    Form        *shrubbery;
    Form        *presidential;

    robot = betinho.makeForm("RobotomyRequestForm", "dog");
    shrubbery = betinho.makeForm("ShrubberyCreationForm", "Office");
    presidential = betinho.makeForm("PresidentialPardonForm", "sister");

    std::cout << "------------------------------\n";

    robot->beSigned(bob);
    shrubbery->beSigned(bob);
    presidential->beSigned(bob);

    std::cout << "------------------------------\n";

    bob.executeForm(*robot);
    bob.executeForm(*shrubbery);
    bob.executeForm(*presidential);

    std::cout << "------------------------------\n";
    
    // delete robot;
    // delete shrubbery;
    // delete presidential;

    return 0;
};