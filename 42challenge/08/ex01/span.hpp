#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <exception>
#include <iostream>
#include <iterator>
class Span
{
	unsigned int		_n;
public:
	std::vector<int>	_nb;
	Span(){};
	Span(unsigned int n):_n(n){};
	~Span(){};

	Span	&operator= (Span &span);
	void				add_number(int b);
	std::vector<int>	rtn_ptr();
	int					longestSpan();
	int					shortestSpan();
	unsigned int		diff(int min, int max);
};

std::ostream &operator << (std::ostream &stream, Span &span);



#endif
