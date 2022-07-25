#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

enum class Colors {black, blue, green, cyan, red, purple, yellow, white};

enum months_t { january=1, february, march, april,
                may, june, july, august,
                september, october, november, december} y2k;

int main()
{
	Colors		mycolor;
	months_t	mymonth;
	y2k		test;

	mycolor = Colors::blue;
	mymonth = april;

	cout << "mycolor is" << endl;
	cout << mymonth << endl;
}
