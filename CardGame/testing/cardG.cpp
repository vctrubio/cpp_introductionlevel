#include "Headers.hpp"

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
public:
	Card(){};
	~Card(){};

	T	*who;
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
//////////


class Card2
{
public:
	Card2(){};
	~Card2(){};

	void	*who;

	// void(*belongsTo);
	// void set_ptr(void *ptr);
	void	iam() {cout << "IAM " <<  who << endl;};
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

	c2.who = &d1;
	c2.iam();

}