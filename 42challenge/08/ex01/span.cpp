#include "span.hpp"

unsigned int Span::diff(int min, int max)
{
	return max >= min
		? max - min
		: min - max;
}


void	Span::add_number(int n)
{
	std::cout << "Number adding: " << n << std::endl;

	if (_nb.size() > _n)
			throw (std::exception());
	_nb.push_back(n);	
};

int		Span::shortestSpan()
{
	int shortestSpan;
	int currentSpan;

	if (_nb.size() <= 1)
	{
		throw (std::exception());
		return (0);
	}
	std::sort(_nb.begin(), _nb.end());
	shortestSpan = diff(_nb[0], _nb[1]);
	for (unsigned int i = 0; i < _nb.size() - 1; i++)
	{
		currentSpan = diff(_nb[i], _nb[i + 1]);
		if (currentSpan < shortestSpan)
			shortestSpan = currentSpan;
	}
	return (shortestSpan);
}
int		Span::longestSpan()
{
	std::vector<int>::iterator	itr_l;
	std::vector<int>::iterator	itr_s;

	itr_l = std::max_element(_nb.begin(), _nb.end());
	itr_s = std::min_element(_nb.begin(), _nb.end());
	return (*itr_l - *itr_s);
};

std::vector<int>	Span::rtn_ptr()
{	
	return (_nb);
}

Span	&Span::operator= (Span &span)
{
		_n = span._n;
		_nb.clear();
		for (int u = 0; u < (int)_n; u++)
				_nb.push_back(span._nb[u]);
		return (*this);
};



std::ostream &operator<< (std::ostream &stream, Span &span)
{
		stream << "Hellothere\n";
		std::vector<int>::iterator ptr;
		
		Span b = span;

		for (ptr = b._nb.begin(); ptr< b._nb.end(); ptr++)
				stream << *ptr << " ";
		return (stream);
};
