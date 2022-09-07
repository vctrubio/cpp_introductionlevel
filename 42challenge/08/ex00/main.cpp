#include "easyfind.hpp"

#include <tuple>

using namespace std;

int main()
{
	std::vector<int> v;
	tuple<int> t;

	// std::vector<int, char> s;

	for (int i = 1; i < 5; i++)
		v.push_back(i);

	std::vector<int>::iterator r1;

	r1 = easyfind(v, 2);
	if (r1 != v.end())
		std::cout << *r1 << " found\n";



//  = { 1, 2, 3, 4, 5 };
}