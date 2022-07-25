#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

/* NOTE
we must use --std=c++17 when compiling- because this method was brought out in 2011
--std=c++17
cin -stdin
cout -stdout
cerr -stder
clog -stdlog
*/


//pasing & refrence- changes the values
//does not need to malloc new int a b c
void	duplicate(int& a, int& b, int& c)                                                                             
{
  a*=2; 
  b*=2;
  c*=2;
}

int	main()
{
	int	a(2);
	string	s;

	cout << "Starting " <<  a << " : "; 

	cin >> s >> a;

	cout << endl << s;
}
