#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> moveZeroes(vector<int> &nums)
    {
        int left = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != 0)
            {
                int temp = nums[left];
                nums[left] = nums[i];
                nums[i] = temp;
                left++;
            }
            
        }
        return nums;
    }
};

int main()
{
    vector<int> nums = {1,2,3,4,0,5,0,6};
    Solution obj;
    obj.moveZeroes(nums);
    for (int i = 0; i < nums.size(); i++)
    {
        cout<<nums[i]<<" ";
    }
    
    return 0;
}