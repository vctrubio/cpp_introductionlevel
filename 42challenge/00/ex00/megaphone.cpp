#include <cstdio>
#include <iostream>

char	is_capital(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 'a' + 'A');
	return (c);
}

void	print_cap_word(std::string str)
{
	std::string	tmp;
	int		i;

	tmp = str;
	i = -1;
	while (str[++i])
		tmp[i] = is_capital(str[i]);
	std::cout << tmp ;
}

int	main(int ac, char **av)
{
	int	i;
	int	k;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		i = 0;
		while (av[++i])
			print_cap_word(av[i]);
		std::cout << std::endl;
	}

	return 0;
}
