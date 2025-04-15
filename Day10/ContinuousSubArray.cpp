#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

class Solution
{
public:
    long long continuousSubarrays(vector<int> &nums)
    {
        int currSum = 0;
        int maxSum = INT32_MIN;
        for (int i = 0; i < nums.size(); i++)
        {
            currSum += nums[i];
            maxSum = max(currSum,maxSum);
            if (currSum < 0)
            {
                currSum = 0;
            }
            
        }
        return maxSum;
    }
};

int main()
{
    vector<int> vec = {-3,-2,-2,-3};
    Solution obj;
    cout << obj.continuousSubarrays(vec);
    return 0;
}