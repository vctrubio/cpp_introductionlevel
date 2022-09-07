#include "span.hpp"

template <typename T>
void print(std::vector<T> const &input)
{
    for (auto it = input.cbegin(); it != input.cend(); it++) {
        std::cout << *it << ' ';
    }
}
 

int main()
{
	Span	n(10);

	std::vector<int> phil = {2, 3, 55};
	print(phil);
	n.add_number(2);
};
