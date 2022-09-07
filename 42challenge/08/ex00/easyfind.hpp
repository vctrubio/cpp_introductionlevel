#ifndef EASYFIND_HPP
#define EASYFIND_HPP

/*
we have vector, list, deque
iterator is used to iterate through
*/

#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <exception>
#include <stack>

template <typename TC>
typename TC::iterator easyfind(TC &container, int toFind)
{
	return std::find(container.begin(), container.end(), toFind);
};

#endif