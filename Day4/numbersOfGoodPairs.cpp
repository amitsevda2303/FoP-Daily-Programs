#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int numIdenticalPairs(vector<int> &nums)
    {
        int count=0;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < nums.size(); j++)
            {
                if (nums[i] == nums[j] && i<j)
                {
                    count++;
                }
                
            }
            
        }
        return count;
        
    }
};

int main(){
    vector<int> a = {1,1,1,1};
    Solution obj;
    cout<<obj.numIdenticalPairs(a);
    return 0;
}