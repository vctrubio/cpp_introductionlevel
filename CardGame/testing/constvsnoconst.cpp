#include "Headers.hpp"

using namespace std;

class	tee
{

};

class	too
{

};

//returning const at the end of member functions

void	pt(string &name)
{
	cout << "name: " << name << endl;
}


int main()
{
	string	w = "Willy";
	string	p = "Willy";

	pt(w);
}