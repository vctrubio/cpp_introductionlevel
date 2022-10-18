#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>


template <typename T>
class Array
{
	T *content;
	int _size;
public:
	Array() : content(new T[0]), _size(0){};
	Array(unsigned int n) : content(new T[n]), _size(n){};
	Array(const Array &oldArray) : content(new T[oldArray._size]), _size(oldArray._size)
	{
		for (int i = 0; i < _size; i++)
			content[i] = oldArray.content[i];
	};
	Array &operator=(Array *oldArray){*this = oldArray;};
	~Array()
	{
		delete[] content;
		std::cout << "Descontructed Succesfully\n";
	}

	int	size(){return _size;};
    T	&operator [](int index);
};

template <typename T>
T	&Array<T>::operator[](int index)
{
	if (index >= 0 && index <= size() && content)
	{
		return (content[index]);
	}
	else
		throw (std::exception());
}
#endif