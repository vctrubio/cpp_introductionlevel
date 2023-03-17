#ifndef RPN_HPP
#define RPN_HPP

#include "Headers.hpp"

enum op
{
	ADD,
	SUB,
	DIV,
	MUL,
};


class RPN
{
public:
	RPN();
	~RPN();

	int							nb;
	std::vector<std::string>	stack;
	op							opp;
};

#endif
