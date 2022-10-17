#include <fstream>
#include <string>
#include <iostream>

std::string	gnl(std::string	&line, std::string &find, std::string &replace)
{
	std::string	str;
	std::string	cpy;
	std::string	tmp;
	int i = 0;
	
	cpy = line;
	while (i <= (int)cpy.length() && cpy.length() >= find.length()) 
	{
		tmp = cpy.substr(i, find.length());
		if (tmp == find)
		{
			i += tmp.length();
			str += replace;
		}
		else
		{
			str += cpy[i];
			i++;
		}
	}
	return (str);

}

void	replace(std::string file, std::string s1, std::string s2)
{
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
		outFile << gnl(line, s1, s2) << std::endl;

	outFile.close();
	inFile.close();
}

int	main(int i, char **a)
{
	if (i != 4)
		std::cout << "NEEDS 3 arguments to run: file, find, replace\n";
	else
		replace(a[1], a[2], a[3]);
	return (1);
}
