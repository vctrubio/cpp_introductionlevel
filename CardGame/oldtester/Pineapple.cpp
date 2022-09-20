#include "Pineapple.hpp"

Pineapple::Pineapple()
	:price(8)
{}

Pineapple::Pineapple(const Pineapple &oldPineapple)
{}

Pineapple& Pineapple::operator= (const Pineapple &oldPineapple)
{
	return (*this);
}

Pineapple::~Pineapple()
{}

class student
{
private:
    int roll;
public:
    // constructor
    student(int r):roll(r) {}
  
    // A const function that changes roll with the help of const_cast
    void fun() const
    {
        ( const_cast <student*> (this) )->roll = 5;
    }
  
    int getRoll()  { return roll; }
};
  
void aFunction(int* a)
{
	*a = 24;
    cout << *a << endl;
}

int main()
{
    const int a = 10;
    const int* iVariable = &a;

    //aFunction(&a);

	const int *b;

	b = &const_cast<int&>(a);

	cout << *b << endl;

	//onst_cast<int>(a);

	int *c = const_cast<int *>(iVariable);

	aFunction(const_cast<int *>(iVariable));

	cout << *iVariable << endl; //wow it changed

	/*Since the function designer did not specify the parameter as const int*, we can strip the const-ness of the pointer iVariable to pass it into the function.
Make sure that the function will not modify the value. */

    return 0;
};

