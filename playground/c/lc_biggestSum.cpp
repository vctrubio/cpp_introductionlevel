#include <string>
#include <vector>
#include <iostream>

using namespace std;

struct Player
{
    string name;
    int sum;
};

Player init(string name)
{
    Player p;

    p.name = name;
    p.sum = 0;
    return (p);
}

int pickOver(vector<int> &nums)
{
    int rtn;
    int higgestNum = 0;
    vector<int>::iterator it;

    cout << "SPECIAL\n";
    int i = 0;
    int pos = 0;
    for (it = nums.begin(); it != nums.end(); it++)
    {
        i++;
        if (*it > higgestNum)
        {
            higgestNum = *it;
            pos = i;
        }
    }
    int n;
    n = nums.size() / 2;
    cout << "POS IS :" << pos << endl;
    if (pos == 1 || pos == nums.size())
    {
        if (pos == 1)
        {
            rtn = nums.front();
            nums.erase(nums.begin());
            return rtn;
        }
        else
        {
            rtn = nums.back();
            nums.pop_back();
            return rtn;
        }
    }
    if (pos > n)
    {
        rtn = nums.front();
        nums.erase(nums.begin());
        return rtn;
    }
    rtn = nums.back();
    nums.pop_back();
    return rtn;
}

int pick(vector<int> &nums)
{
    int rtn;
    if (nums.size() >= 1)
    {
        if (nums.size() > 3)
            rtn = pickOver(nums);
        else if (nums.front() > nums.back())
        {
            rtn = nums.front();
            nums.erase(nums.begin());
        }
        else
        {
            rtn = nums.back();
            nums.pop_back();
        }
    }
    else
    {
        rtn = nums.back();
        nums.pop_back();
    }
    cout << "RTN = " << rtn << endl;
    return rtn;
}

class Solution
{
public:
    bool PredictTheWinner(vector<int> &nums)
    {
        Player one = init("Charlote");
        Player two = init("Boby");

        int i = 0;
        while (nums.size() > 0)
        {
            if (i % 2 == 0)
            {
                cout << "P1\n";
                one.sum += (pick(nums));
            }
            else
            {
                cout << "P2\n";
                two.sum += (pick(nums));
            }
            i++;
            cout << "-------------\n";
        }
        cout << "ONE = VS TWO" << one.sum << " " << two.sum << endl;
        if (one.sum >= two.sum)
            return true;
        return false;
    }
};

int main()
{
    vector<int> nums = {1000, 999, 999, 1000, 555, 400};

    Solution s;
    cout << s.PredictTheWinner(nums);
}