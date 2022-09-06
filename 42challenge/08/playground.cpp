#include <iostream>
#include <vector>
#include <map>

using namespace std;

//like an array but dynamicly changing size
int main()
{
	vector<int> v1 = {1, 2, 3};
	map<char, int> mp;

	mp = {{'T', 7}, {'V', 8}};
	mp = {{'B', 7}, {'v', 8}};
	pair<char, int> p1('T', 11);
	mp.insert(p1);
	cout << mp['T'] << endl;
}
