#include "Headers.hpp"

//__APPLE__
#ifndef __unix
#define I 24
#else
#define I 4
#endif
using namespace std;


class Player
{
public:
	Player(){};
	~Player(){};

	string name = "Player1";
};

class Dealer
{
public:
	Dealer(){};
	~Dealer(){};

	string name = "FRANK";
};

template <class T>
class Card
{
	T	*who;
public:
	Card(){};
	~Card(){};

	// void(*belongsTo);
	// void set_ptr(void *ptr);
	void	iam() {cout << "IAM " << who->name << endl;};
	void	count();
};

template <class T>
void	Card<T>::count()
{
	cout << "count is working, but do we really need do define template every time \n";
}

template <class T>
T&	rtnF(void *ptr)
{
	T	&p = static_cast<T>(ptr);

	return (p);
};

//////////


class Card2
{
public:
	Card2(){};
	~Card2(){};

	void	*who;

	void	iam() {cout << "IAM " <<  who << endl;};
	void	display(void *c);
};

ostream &operator<<(ostream &os, const Player &c)
{
	os << c.name << endl;
	return (os);
}

void	Card2::display(void *c)
{
	Player *p;
	Dealer *d;

	d = static_cast<Dealer*>(c);

	try
	{
		p = static_cast<Player*>(c);
		cout << p->name << " PTR" << endl;
		cout << d->name << " DDPTR" << endl;
	}
	catch(int i)
	{
		cout << "Not here\n";
	}
	// cout << (*c) << " is a pointer \n"; //how do i deference this //print out who -> name
	if (c == who)
	{
		cout << "YES\n";
	}
};



int main()
{
	// Card<Dealer>	c;
	// Dealer	d1;
	// Player	p;

	// c.who = &d1;

	// c.iam();
	// c.count();

	Card2		c2;
	Dealer		d1;
	Player		p1;

	Player		*p3;

	c2.who = &d1;
	c2.iam();
	c2.display(&p1);

	c2.who = &p1;
	c2.iam();

	c2.display(&p1);


	Dealer		d2;
	c2.who = &d2;
	c2.display(&d2);
	
	// rtnF<Player>(p3);
	// cout << "is I: " << I << endl;
}
