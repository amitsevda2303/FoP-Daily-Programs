#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> a;
        for (int i = 0; i < nums.size()-1; i++)
        {
            for (int j = i+1; j < nums.size(); j++)
            {
                if (target == nums[i]+nums[j])
                {
                    a.push_back(i);
                    a.push_back(j);
                    return a;
                }
                
            }
            
        }
        return a;
    }
};

int main(){
    int target = 10;
    vector<int> arr = {2,5,5,11};
    Solution obj;
    vector<int> output = obj.twoSum(arr, target);
    cout<<output[0]<<"\t"<<output[1];
    return 0;
}