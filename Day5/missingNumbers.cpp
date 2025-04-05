#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        sort(nums.begin(),nums.end());
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i]!=i)
            {
                return i;
            }   
            
        }
        return nums.size();
        
    }
};

int main(){
    vector<int> arr = {0,1};
    Solution obj;
    cout<<obj.missingNumber(arr);
    return 0;
}