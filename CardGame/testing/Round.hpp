#ifndef ROUND_HPP
#define ROUND_HPP

#include "Headers.hpp"

class Round
{
public:
	Round();
	Round(const Round &oldRound);
	Round& operator= (const Round &oldRound);
	~Round();
};

#endif
