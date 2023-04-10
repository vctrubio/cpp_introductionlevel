#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include "Headers.hpp"

class PmergeMe
{
	std::vector<int> _n;
	std::vector<int>::iterator it;
public:
	PmergeMe(std::vector<int>);
	PmergeMe(const PmergeMe &oldPmergeMe);
	PmergeMe& operator= (const PmergeMe &oldPmergeMe);
	~PmergeMe();

	void print(int i);
	void insert_sort();
	void merge_sort(std::vector<int>&);
	int  size() {return _n.size();};

};

#endif
