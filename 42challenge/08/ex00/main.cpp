#include "easyfind.hpp"

#include <tuple>

using namespace std;

int main()
{
	std::vector<int> v;
	tuple<int> t;

	// std::vector<int, char> s;

	for (int i = 1; i < 5; i++)
		v.push_back(i);

	std::vector<int>::iterator r1;

	r1 = easyfind(v, 2);
	if (r1 != v.end())
		std::cout << *r1 << " found\n";

}


/* extra notes

struct C_Cell {

  Point3f min, max;

};
then I created a vector of C_Cell

std::vector< C_Cell> grid;

for (std::vector<C_Cell>::iterator it = grid.begin() ; it != grid.end(); ++it)
(*it).min


vector<Student*, string> Students;
======
std::vector<std::pair<Student*, string>> students;
std::map<Student*, string> students;
>>>>>>
students.push_back(std::make_pair(x,y));
students.emplace_back(x, y); 
*/