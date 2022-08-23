#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

/*Special member functions are member functions that are implicitly defined as member of classes under certain circumstances. There are six:

Default constructor		C::C();
Destructor			C::~C();
Copy constructor		C::C (const C&);
Copy assignment			C& operator= (const C&);
Move constructor		C::C (C&&);
Move assignment			C& operator= (C&&);

*/


//Default Constructor
class DC
{
	int	total;
	public:
		DC(int i) : total(i){};
		DC() {}
		int	accumulate (int x) {return (total += x);};
		void	accumulate_void (int x) {total += x;};
		int	pTotal () {return total;};
};


//Destructor
//They are responsible for the necessary cleanup needed by a class when its lifetime end
//The classes we have defined in previous chapters did not allocate any resource and thus did not really require any clean up.

class DD
{
	string	*ptr;
	public:
		DD() : ptr(new string) {};
		DD(const string &str) : ptr(new string(str)){}
		const string &content() const {return *ptr;}
		//destructor
		~DD() {delete ptr;}
};

//Copy Consstructor
//MyClass::MyClass(const MyClass& x) : a(x.a), b(x.b), c(x.c) {}
class CC
{
	string *ptr;
	public:
		CC(const string &str) : ptr(new string(str)){}
		CC(const CC &x) : ptr(new string(x.content())){}
		const string &content() const {return *ptr;}
		~CC() {delete ptr;}
};

/*
int main()
{
	CC test("hisexylady");
	CC foo = test;

	cout << foo.content() << endl;
} */


/*Copy assignment
MyClass foo;
MyClass bar (foo);       // object initialization: copy constructor called
MyClass baz = foo;       // object initialization: copy constructor called
foo = bar;               // object already initialized: copy assignment called 

The copy assignment operator is an overload of operator=
return value is generally a reference to *this

ie
MyClass& operator= (const MyClass&);

CC& operator= (const CC &x)
{
	delete ptr;
	ptr = new string(x.content()); EVEN BETTER
	*ptr = x.content();
	return *this;
}
*/

/* MOVE constructor and assignment
unlike copying, the content is actually transferred from one object (the source) to the (the destination): the source loses that content, which is taken over by the destination

This moving only happens when the source of the value is an unnamed object.
Unnamed objects are objects that are temporary in nature, and thus haven't even been given a name.

The move constructor is called when an object is initialized on construction using an unnamed temporary
The move assignment is called when an object is assigned the value of an unnamed temporary:

	
MyClass fn();            // function returning a MyClass object
MyClass foo;             // default constructor
MyClass bar = foo;       // copy constructor
MyClass baz = fn();      // move constructor
foo = bar;               // copy assignment
baz = MyClass();         // move assignment 

MyClass (MyClass&&);             // move-constructor
MyClass& operator= (MyClass&&);  // move-assignment

*/

class Example6 {
    string* ptr;
  public:
    Example6 (const string& str) : ptr(new string(str)) {}
    ~Example6 () {delete ptr;}
    // move constructor
    Example6 (Example6& x) : ptr(x.ptr) {x.ptr=nullptr;}
    // move assignment
    Example6& operator= (Example6&& x) {
      delete ptr;
      ptr = x.ptr;
      x.ptr=nullptr;
      return *this;
    }
    // access content:
    const string& content() const {return *ptr;}
    // addition:
    Example6 operator+(const Example6& rhs) {
      return Example6(content()+rhs.content());
    }
};

int main () {
  Example6 foo ("Exam");
  Example6 bar = Example6("ple");   // move-construction

  foo = foo + bar;                  // move-assignment

  cout << "foo's content: " << foo.content() << '\n';
  return 0;
}
