#include <fstream>
#include <string>
#include <iostream>


std::string	gnl(std::string	&line, std::string &find, std::string &replace)
{
	std::string	str;

	str = "myding dong";

	return (str);

}

void	replace(std::string file, std::string s1, std::string s2)
{
	std::cout << file + s1 + s2 << std::endl;
	std::ifstream	inFile;
	std::ofstream	outFile;
	std::string	outFileName;
	std::string	line;

	inFile.open(file);
	if (!inFile)
	{
		std::cout << "No file found, sorry try again make sure the file exist\n";
		return ;
	}
	outFileName = file + ".replace";
	outFile.open(outFileName);
	if (!outFile)
	{
		std::cout << "Can't create new file\n";
		return ;
	}	

	while (std::getline(inFile, line))
	{
		outFile << gnl(file, s1, s2) << std::endl;
	}

	outFile.close();
	inFile.close();
}



int	validate(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Try ./program testfile search replace" << std::endl;
		return (0);
	}
	if (*av[1] == 0 || *av[2] == 0 || *av[3] == 0)
		return (0);
	return (1);
}

int	main(int ac, char **av)
{
	std::string	u="file";
	std::string	i="youur";
	std::string	o="momy";

	replace(u, i, o);
}
