#include "PmergeMe.hpp"

//Merge Sort is also a sorting algorithm. The algorithm divides the array into two halves, recursively sorts them, and finally merges the two sorted halves.
//


int main(int argc, char **argv)
{
	std::vector<int> nums;

	if (argc < 2) {
		std::cerr << "Usage: " << argv[0] << " <positive integers>\n";
		return -1;
	}
	for (int i = 1; i < argc; i++)
	{
		try
		{
			int tmp = std::stoi(argv[i]);
			if (tmp <= 0)
			{
				std::cerr << "Error: " << tmp << " is not positive\n";
				return -1;
			}
			nums.push_back(tmp);
		}
		catch (std::invalid_argument& e)
		{
			std::cerr << "Error: " << argv[i] << " is not valid\n";
			return -1;
		}
	}
	
	PmergeMe test(nums);
	std::cout << "Before: ";
	test.print(0);

	std::clock_t start_time = std::clock();

	/*
	if (nums.size() <= 10)
		test.insert_sort();
	else */
		test.merge_sort(nums);
	std::clock_t end_time = std::clock();

	std::cout << "After: ";
	test.print(0);
	std::cout << "Time to process a range of " << nums.size() << " elements with merge_sort: "
         << static_cast<double>(end_time - start_time) / CLOCKS_PER_SEC * 1e9 << " ns" << std::endl;

	start_time = std::clock();
	sort(nums.begin(), nums.end());
	end_time = std::clock();

	std::cout << "Time to process a range of " << nums.size() << " elements with std::sort: "
         << static_cast<double>(end_time - start_time) / CLOCKS_PER_SEC * 1e9 << " ns" << std::endl;

	return 1;
}
