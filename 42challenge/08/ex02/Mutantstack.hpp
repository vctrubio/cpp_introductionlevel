#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>
#include <vector>

/*
deque
vectors
list
*/

template <typename X>
class MutantStack : public std::stack<X>
{
public:
	typedef typename std::stack<X>::container_type::iterator iter;
	MutantStack()
	{
	}
	MutantStack(const MutantStack<X> &old)
	{
		*this = old;
	}
	MutantStack<X> &operator=(const MutantStack<X> &old)
	{
		this->c = old.c;
		return (*this);
	}
	~MutantStack()
	{
	}
	iter begin(void)
	{
		return (this->c.begin());
	}
	iter end(void)
	{
		return (this->c.end());
	}
};
//CONFUSED about where the c variable comes from (containter_type but wtf)
#endif
