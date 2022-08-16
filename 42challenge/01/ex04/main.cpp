#include <fstream>
#include <string>
#include <iostream>

void	replace(std::string file, std::string s1, std::string s2)
{
	std::cout << file + s1 + s2 << std::endl;
}



int	main(int ac, char **av)
{
	std::string	u="myass";
	std::string	i="youur";
	std::string	o="momy";
	
	replace(u, i, o);

}
