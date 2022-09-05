#ifndef ITER_HPP
#define ITER_HPP

// Write a function template iter that take 3 parameters and returns nothing.
//  The first parameter is the address of an array, 
//  the second one is the length of the array  
//  the third one is a function called for each element of the array.

#include <iostream>
#include <string>

template<typename X, typename F>

void	iter_ft(X *addr, int len, F fn)
{
	for (int i = 0; i < len; i++)
		fn(addr[i]);
}

template<typename T>
void    print(T &p)
{
    std::cout << p << std::endl;
}

#endif