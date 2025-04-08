#include <iostream>
#include<vector>
using namespace std;

class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int k = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != val)
            {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};

int main()
{
    Solution obj;
    vector<int> arr = {0,1,2,2,3,0,4,2};
    int val = 2;
    cout<<obj.removeElement(arr,val);
    return 0;
}