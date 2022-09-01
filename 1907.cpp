// we must use --std=c++17 when compiling- because this method was brought out in 2011

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
  int numbers[5];
  int *p;
  p = numbers;
  *p = 10;
  p++;
  *p = 20;
  p = &numbers[2];
  *p = 30;
  p = numbers + 3;
  *p = 40;
  p = numbers;
  *(p + 4) = 50;
  for (int n = 0; n < 5; n++)
    cout << numbers[n] << ", ";
  return 0;
}

/* POinter incrementation

*p++   // same as *(p++): increment pointer, and dereference unincremented address
*++p   // same as *(++p): increment pointer, and dereference incremented address
++*p   // same as ++(*p): dereference pointer, and increment the value it points to
(*p)++ // dereference pointer, and post-increment the value it points to

*p++ = *q++; //
*p = *q;
++p;
++q;

*(foo+4) = foo[4]
*/

int addition(int a, int b)
{
  return (a + b);
}

int subtraction(int a, int b)
{
  return (a - b);
}

int operation(int x, int y, int (*functocall)(int, int))
{
  return ((*functocall)(x, y));
}

int pointerfunctions()
{
  int m, n;
  int (*minus)(int, int) = subtraction;

  m = operation(7, 5, addition);
  n = operation(20, m, minus);
  cout << n;
  return 0;
}
