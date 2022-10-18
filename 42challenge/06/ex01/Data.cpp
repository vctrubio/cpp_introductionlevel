#include "Data.hpp"

Data::Data()
{
	std::cout << "DeData Constructor" << std::endl;
}

Data::Data(std::string str)
	:_str(str)
{
	std::cout << "Data Constructor" << std::endl;
}

Data::~Data()
{
	std::cout << "Deconstructor\n";
}

uintptr_t	Data::serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*Data::deserialize(uintptr_t raw)
{
	Data	*ptr = reinterpret_cast<Data*>(raw);
	return ptr;
}

void	Data::setStr(std::string str)
{
	_str = str;
}

void	Data::getStr()
{
	std::cout << "The string is: " << _str << std::endl;
}