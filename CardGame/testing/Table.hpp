#ifndef TABLE_HPP
#define TABLE_HPP

#include "Headers.hpp"

class Table
{
public:
	Table();
	Table(const Table &oldTable);
	Table& operator= (const Table &oldTable);
	~Table();
};

#endif
