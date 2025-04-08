#include <iostream>
#include<vector>
using namespace std;

class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int maxCount = 0, count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 1)
            count++;
        else
            count = 0;

        if (count > maxCount)
            maxCount = count;
    }
    return maxCount;
    }
};

int main()
{
    vector<int> nums = {1,1,1,1};
    Solution obj;
    cout<<obj.findMaxConsecutiveOnes(nums);
    return 0;
}