
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;
//The keyword using can also be used as a directive to introduce an entire namespace:
// namespace new_name = current_name;

/* NOTE
we must use --std=c++17 when compiling- because this method was brought out in 2011
*/

template <class T>

T sum(T x, T y)
{
	return (x + y);
}

namespace	mytest
{
	int	a = 25;
	int	c = 101;
	int doubledown() {return 5*2;};
	int doubledown2(int x) {return x*2;};
	//T doubledown(T t) {return t*2};
}

namespace	bar
{
	int b; 
	void setb(int b)
	{
		bar::b = b;
	} //there must be a shorter way for self::var
}


int main()
{
	int a = 25;
	int b = 26;
	int arra[2];
	int *arr;
	using mytest::c;

	arra[0] = 12;
	arra[1] = 3;

		cout << "WHY" << arra[1];

	bar::b = 50;
	bar::setb(24);
	cout << sum(84, 97) << endl;
	cout << mytest::doubledown2(42)<< endl;
	cout << bar::b << endl;
	cout << "here is c:" << c << endl;

}
