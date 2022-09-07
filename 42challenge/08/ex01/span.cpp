#include "span.hpp"



void	Span::add_number(int n)
{
	std::cout << "Number adding: " << n << std::endl;

	if (_nb.size() > _n)
			throw (std::exception());
	_nb.push_back(n);	
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

		for (ptr = span._nb.begin(); ptr< span._nb.end(); ptr++)
				stream << *ptr << " ";
		return (stream);
};
