#include <iostream>
#include <vector>
#include <map>

using namespace std;

//like an array but dynamicly changing size

struct	Vertex
{
		float x, y, z;
		Vertex(float x, float y, float z)
				:x(x), y(y), z(z)
		{}

		Vertex(const Vertex& vertex)
				:x(vertex.x), y(vertex.y), z(vertex.y)
		{
				std::cout << "cp\n";
		}
};


int main()
{
	vector<int> v1 = {1, 2, 3};
	map<char, int> mp;

	mp = {{'T', 7}, {'V', 8}};
	mp = {{'B', 7}, {'v', 8}};
	pair<char, int> p1('T', 11);
	mp.insert(p1);
	//cout << mp['T'] << endl;

	vector<Vertex>		my;

	my.push_back(Vertex(1, 3, 4)); 
	my.emplace_back(9, 3, 4); 
	my.emplace_back(19, 3, 4); 
	for (auto i = my.begin(); i != my.end(); i++)
	{	
			cout << "wehave: " << i->x << i->y << endl;
	}
}
