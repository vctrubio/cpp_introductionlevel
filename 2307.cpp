#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;
//took 2 days to understand so 23-25 of July

class CVector {
  public:
    int x,y;
    CVector () {};
    CVector (int a,int b) : x(a), y(b) {}
    CVector operator + (const CVector&);
};

CVector CVector::operator+ (const CVector& param) {
  CVector temp;
  temp.x = x + param.x;
  temp.y = y + param.y;
  return temp;
}

CVector operator/ (const CVector &lhs, const CVector &rhs) // / because operator+ used
{
	CVector tmp;
	tmp.x = lhs.x + rhs.x;
	tmp.y = lhs.y + rhs.y;
	return (tmp);
}

//	
//CVector (int, int) : x(a), y(b) {}  // function name CVector (constructor)
//CVector operator+ (const CVector&); // function that returns a CVector


int main () {
  CVector foo (3,1);
  CVector bar (1,2);
  CVector result;
  result = foo + bar;
  cout << result.x << ',' << result.y << '\n';
  return 0;
}

/*
static members have the same properties as non-member variables but they enjoy class scope. For that reason, and to avoid them to be declared several times, they cannot be initialized directly in the class, but need to be initialized somewhere outside it. 

Because it is a common variable value for all the objects of the same class, it can be referred to as a member of any object of that class or even directly by the class name (of course this is only valid for static members):

They neither can use the keyword this.

cout << a.n;
cout << Dummy::n;

*/

class Dummy {
  public:
    bool isitme (Dummy& param);
};

bool Dummy::isitme (Dummy& param)
{
  if (&param == this)
    return true;
  return false;
}

int main_b () {
  Dummy a;
  Dummy* b = &a;
  if ( b->isitme(a) )
    cout << "yes, &a is b\n";
  return 0;
}

/* when declared
const CVector foo
READ ONLY 
*/

/*Class Template*/
template <class T>
class mypair {
    T values [2];
  public:
    mypair (T first, T second)
    {
      values[0]=first; values[1]=second;
    }
};
mypair<int> myobject (115, 36);
mypair<double> myfloats (3.0, 2.18);


