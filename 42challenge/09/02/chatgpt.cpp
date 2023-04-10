
#include <iostream>
#include <vector>
#include <chrono>

using namespace std;
using namespace std::chrono;

void merge_sort(vector<int>& nums) {
    if (nums.size() <= 1) return;
    int mid = nums.size() / 2;
    vector<int> left(nums.begin(), nums.begin() + mid);
    vector<int> right(nums.begin() + mid, nums.end());
    merge_sort(left);
    merge_sort(right);
    nums.clear();
    merge(left.begin(), left.end(), right.begin(), right.end(), back_inserter(nums));
}

void insert_sort(vector<int>& nums) {
    for (int i = 1; i < nums.size(); i++) {
        int key = nums[i];
        int j = i - 1;
        while (j >= 0 && nums[j] > key) {
            nums[j + 1] = nums[j];
            j--;
        }
        nums[j + 1] = key;
    }
}

int main(int argc, char* argv[])
{
    if (argc < 2) {
        cerr << "Usage: " << argv[0] << " <positive integers>" << endl;
        return 1;
    }
    vector<int> nums;
    for (int i = 1; i < argc; i++) {
        try {
            int num = stoi(argv[i]);
            if (num <= 0) {
                cerr << "Error: " << num << " is not a positive integer" << endl;
                return 1;
            }
            nums.push_back(num);
        } catch (invalid_argument& e) {
            cerr << "Error: " << argv[i] << " is not a valid integer" << endl;
            return 1;
        }
    }

    cout << "Before: ";
    for (int num : nums) cout << num << " ";
    auto start_time = high_resolution_clock::now();
    if (nums.size() <= 10) {
        insert_sort(nums);
    } else {
        merge_sort(nums);
    }

    auto end_time = high_resolution_clock::now();
    cout << "\nAfter: ";
    for (int num : nums) cout << num << " ";
    cout << "\nTime to process a range of " << nums.size() << " elements with merge_sort: "
         << duration_cast<nanoseconds>(end_time - start_time).count() << " ns" << endl;
    start_time = high_resolution_clock::now();
    sort(nums.begin(), nums.end());
    end_time = high_resolution_clock::now();
    cout << "Time to process a range of " << nums.size() << " elements with std::sort: "
         << duration_cast<nanoseconds>(end_time - start_time).count() << " ns" << endl;
    return 0;
}
