#ifndef COMBO_HPP
#define COMBO_HPP

#include "Headers.hpp"

class Combo
{
public:
	Combo();
	Combo(const Combo &oldCombo);
	Combo& operator= (const Combo &oldCombo);
	~Combo();
};

#endif
