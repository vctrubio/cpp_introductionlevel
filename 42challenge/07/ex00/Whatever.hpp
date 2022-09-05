#ifndef WHATEVER_HPP
#define WHATEVER_HPP

//swap, min, max TEMPLATES
#include <iostream>

template<typename X>
void swap(X &a, X &b)
{
	X tmp = a;
	a = b;
	b = tmp;
};

template<typename X>
X       min(X &a, X &b)
{
    if (a <= b)
        return a;
    else
        return b;
};

template<typename X>
X       max(X &a, X &b)
{
    if (a >= b)
        return a;
    else
        return b;
};


#endif