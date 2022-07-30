#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

//My practice

class Library {
	private:
		int total;
	public:
	void	print_all(void) {
		cout << "print_all" << endl;
	}; //create a link_list to do so
	
};

class Book : public Library {
	private:
		string	name;
		int	price;
	public:
		Book(string n, int i) : name(n), price(i) {};
		Book() : name("null"), price(0) {};
		string	who() { return name;};
		//~Book() : {delete name;}; //dont know how this works obvs

};

struct	ll {
	void	*ptr;
	void	*content;
	void	*next;
};

ll	*_ll(void) {
	
	static ll	l;

	return (&l);
}

void	ll_add(void *p)
{
	ll	*ptr = _ll();

	if (!ptr)
		cout << "Noptr:" << endl;
	else
		cout<< "adding"<<endl;
	while (ptr)
		ptr = (ll*)ptr->next;
	ptr = (ll*)p;
	//printf("hi there %s \n", p->who());
	ptr->content = (void *)p;
}


void	ll_print(void) {
	ll	*ptr = _ll();

	while (ptr) {
		cout << ptr << endl;
		ptr = (ll *)ptr->next;
	}
}



int main()
{
	Book 	roger("Roger", 26);
	Book 	raf("raf", 26);
	Library l1;
	ll	lst;

	ll_add((void*)&roger);
	ll_add((void*)&raf);
	cout << "hi/bye";
	ll_print();
}
