#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>
#include <stdint.h>

class Data
{
	std::string _str;
public:
	Data();
	Data(std::string str);
	~Data();
	uintptr_t	serialize(Data *ptr);
	Data		*deserialize(uintptr_t raw);
	void		getStr();
	void		setStr(std::string str);
};

#endif