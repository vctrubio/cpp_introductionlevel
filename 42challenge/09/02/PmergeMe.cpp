#include "PmergeMe.hpp"

PmergeMe::PmergeMe(std::vector<int> init): _n(init)
{}


PmergeMe::PmergeMe(const PmergeMe &oldPmergeMe)
{}

PmergeMe& PmergeMe::operator= (const PmergeMe &oldPmergeMe)
{
	return (*this);
}

PmergeMe::~PmergeMe()
{}

void	PmergeMe::print(int i)
{
	if (i == 1)
		std::cout << "Before\n";
	if (i == 2)
		std::cout << "After\n";
	for (it = _n.begin(); it != _n.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

void	PmergeMe::insert_sort()
{
	//	std::cout << "hello from insert_sort\n";

	for (int i = 1; i < _n.size(); i++) {
		int key = _n[i];
		int j = i - 1;
		while (j >= 0 && _n[j] > key) {
			_n[j + 1] = _n[j];
			j--;
		}
		_n[j + 1] = key;
	}
}


void	PmergeMe::merge_sort(std::vector<int>& nums)
{
	//	std::cout << "hello from merge_sort\n";

	if (nums.size() <= 1) return;
    int mid = nums.size() / 2;
	std::vector<int> left(nums.begin(), nums.begin() + mid);
	std::vector<int> right(nums.begin() + mid, nums.end());
    merge_sort(left);
    merge_sort(right);
    nums.clear();
    merge(left.begin(), left.end(), right.begin(), right.end(), back_inserter(nums));
	_n = nums;
}
