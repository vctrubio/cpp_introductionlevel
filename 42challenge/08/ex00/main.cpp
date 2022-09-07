#include "Mutantstack.hpp"

/*
empty
size
back
push_back
pop_back
*/

int main()
{
	std::stack<int> mystack;

	mystack.push(22);
	mystack.push(22);
	while (!mystack.empty())
	{
			std::cout << mystack.top() << std::endl;
			mystack.pop();
	}

};
