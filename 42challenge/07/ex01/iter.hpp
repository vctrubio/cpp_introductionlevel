#ifndef ITER_HPP
#define ITER_HPP

// Write a function template iter that take 3 parameters and returns nothing.
//  The first parameter is the address of an array, 
//  the second one is the length of the array  
//  the third one is a function called for each element of the array.

#include <iostream>
#include <string>

template< typename T >
void tester(T const &value)
{
	std::cout << "VALUE: " << value << std::endl;
}

template <typename T>
void	iter(T *arr, size_t	len, void (*fun)(T const &))
{
	if (!arr)
		return;
	for (size_t i = 0; i < len; i++)
		fun(arr[i]);
}

#endif