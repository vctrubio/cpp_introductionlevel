#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

//Polymorphism section

/* Deep Understanding of
-Classes
-Data Structures
-Friendship and inheritance

protected:/ /means all sub classes and base class can access these functions and variables but can't be accessed outside classes
public://Pubic methods and variables can be accessed inside and outside of the class
private://only entity class can read and write the variables exeption is friend



Car BASE CLASS
	Driver DERIEVED 
virtual keyword allows both variable declaration in both class
A class that declares or inherits a virtual function is called a polymorphic class.

*/

class Car {
	protected:
		const int	weight_car;
		int		weight_total;
		int		length;
	public:
		Car() : weight_car(1000) {}
		Car (int x) : weight_car(x){};
		int info() { return weight_car; }
		int set_length(int x) 
		{
			length = x;
			cout << "ok\n";
			return length;
		}
		int	_length() {  return length; }
};

class Driver: public Car  {
	private:
		string	name;
		int	weight;
	public:
		Driver(string name) : name(name),weight(24){}
		string who() { return name; }
		void	set_kg(int x) {weight = x;}
		void	set_length_driver(int x) {length = x; cout << "OK";}
		int	kg() { return weight + weight_car; }
};

class Team: public Car  {
	private:
		int	size;
		int	weight_avg;
	public:
		Team() : size(6), weight_avg(20){}
		int	total() { return size * weight_avg + weight_car; }
};

//int total() { return size * weight_avg; }
//int &total() { return size * weight_avg; } the &will return the address and not allocate memory again- better practice

int main()
{
	string	s1 {"Frank\nwants\nmore"};
	Car		myCar(50);
	Driver	alonso("Alonso");
	Team	f1;
	Car		*p_alonso;

	p_alonso = &alonso;
//	p_alonso->alonso.set_kg(88); //this does not work because not a member- but a derived class
	alonso.set_length_driver(6199);
	p_alonso->set_length(699);

	cout << "Mycar has: " << myCar.info() << endl;
	cout << "Mycar length:: " << p_alonso->_length() << endl;
	cout << "New driver in town:" << alonso.who() << alonso.kg() <<"KG" <<endl;
	cout << "TEAM f1:avg: " << f1.total() << endl;


};
