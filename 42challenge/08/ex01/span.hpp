#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>

class Span
{
	unsigned int		_n;
	std::vector<int>	_nb;
public:
	Span(){};
	Span(unsigned int n):_n(n){};
	~Span(){};

	void	add_number(int b);
};


#endif
