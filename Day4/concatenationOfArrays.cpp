#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> getConcatenation(vector<int> &nums)
    {
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            nums.push_back(nums[i]);
        }
        return nums;
    }
};

int main()
{
    vector<int> nums = {1,2,3};
    Solution obj;
    cout<<obj.getConcatenation(nums).size();

}