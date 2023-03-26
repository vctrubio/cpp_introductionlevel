#include <iostream>
#include <string>

using namespace std;

/* NOTE
to declare variable int b{3};
we must use --std=c++17 when compiling- because this method was brought out in 2011
--std=c++17
*/

int main()
{
	int	a(2);
	int	b(3);
 	string	mystring;
	int	*p(nullptr);
	char	*p2 = nullptr;

	mystring = "my_string_string\n"; 
	a = a + b;
	cout << "Hello P!";
	cout << "\n" <<  a << endl;
	cout << mystring <<  a;
}
