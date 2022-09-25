#include "Round.hpp"
#include "ftFts.hpp"

Round::Round()
	:nb(0)
{}

Round::Round(const Round &oldRound)
{}

Round& Round::operator= (const Round &oldRound)
{
	return (*this);
}

Round::~Round()
{
	cout << "Round deconstructor\n";
}


Round Round::operator++()
{
	nb++;
	return (*this);
}


// call	Round::round()
// {
	
// }
