# include <iostream>
# include <string>


int main()
{
	std::string	str 		= "HI THIS IS BRAIN";
	std::string	*stringPTR	= &str;
	std::string	&stringREF	= str;

	std::cout << "ADRESS of str "  << &str << std::endl;
	std::cout << "ADRESS of ref "  << &stringREF << std::endl;
	std::cout << "ADRESS of ptr "  << stringPTR <<std::endl;

	std::cout << "cout: MR.BRAIN PTR " << *stringPTR << std::endl;
	std::cout << "cout: MR.BRAIN REF " << stringREF<< std::endl;
	return (0);
}