#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

//Implicit converison chapter

/*
Converting to int from some smaller integer type, or to double from float is known as promotion

Single-argument constructors:
	allow implicit conversion from a particular type to initialize an object.
Assignment operator: 
	allow implicit conversion from a particular type on assignments.
Type-cast operator: 
	allow implicit conversion to a particular type.

The type-cast operator uses a particular syntax: it uses the operator keyword followed by the destination type and an empty set of parentheses.

*/

class A {};

class B {
public:
  // conversion from A (constructor):
  B (const A& x) {}
  // conversion from A (assignment):
  B& operator= (const A& x) {return *this;}
  // conversion to A (type-cast operator)
  operator A() {return A();}
};

int main ()
{
  A foo;
  B bar = foo;    // calls constructor
  bar = foo;      // calls assignment
  foo = bar;      // calls type-cast operator
  return 0;
}
