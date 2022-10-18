#include "span.hpp"

/*
template <typename T>
void print(std::vector<T> const &input)
{
    for (std::vector<T> it = input.cbegin(); it != input.cend(); it++) {
        std::cout << *it << ' ';
    }
}
std::ostream &operator<<(std::ostream &os, const std::vector<int> &input)
{
    for (auto const &i: input) {
        os << i << " ";
    }
	os << "\nos operator\n";
    return os;
} */

int main()
{
	Span	n(10);

	std::vector<int> phil; 
	//print(phil);
	//std::cout << phil;
	n.add_number(2);
	n.add_number(10);
	n.add_number(5);

	int ip;
	// std::vector<int>::iterator	bg = n._nb.begin();
	ip = n._nb.at(0);

	std::vector<int> p = n.rtn_ptr();
	std::cout << "HIº\n"; 

//	std::cout << n;

	std::cout <<	n.shortestSpan();

};
