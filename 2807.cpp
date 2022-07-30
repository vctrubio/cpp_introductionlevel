
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

//Polymorphism section Part 2

/*Abstact Base classes
They are classes that can only be used as base classes
are allowed to have virtual meber functions without definition 
- known as pure virtual funtions
Syntax =0
*/

class Polygon {
  protected:
    int width, height;
  public:
    Polygon () : width(10), height(2) {}
    void set_values (int a, int b)
    {	
	width=a;
	height=b;
    }
	virtual int area () =0; //abs (abstract base class)
    	int	p_w() { return width; } //print_width
	void printarea() { cout << this->area() << '\n'; }
};

class Rectangle: public Polygon {
  public:
    int area (void)
      { return (width * height); }
};

class Triangle: public Polygon {
  public:
    int area (void)
      { return (width * height / 2); }
};


int main()
{
	Rectangle	rect;
	//Polygon	mypoly; //not allowed because it is ABS
	Polygon		*mypoly;
	Polygon		*p2 = new Triangle();

	mypoly = &rect;	
	cout << "W x H" << mypoly->p_w() << endl;
	mypoly->printarea();
	p2->printarea();
//	delete p2; compiler error idk why
}
