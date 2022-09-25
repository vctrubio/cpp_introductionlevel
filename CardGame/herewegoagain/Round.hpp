#ifndef ROUND_HPP
#define ROUND_HPP

#include "Headers.hpp"
#include "Table.hpp"

typedef enum
{
	EMPTY = 0,
	Check = 1,
	Bet = 2,
	Raise = 3,
	Fold = 4
} 		call;

class Round //: public Table
{
	int nb; //round 0, 1, 2, 3, 4 
public:
	Round();
	Round(const Round &oldRound);
	Round& operator= (const Round &oldRound);
	~Round();

	Round			operator++();
	// virtual call	round();

	// void		deal();
};


#endif
