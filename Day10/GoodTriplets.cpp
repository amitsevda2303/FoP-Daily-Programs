#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution
{
public:
    int countGoodTriplets(vector<int> &arr, int a, int b, int c)
    {
        int count = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            for (int j = i + 1; j < arr.size(); j++)
            {
                for (int k = j + 1; k < arr.size(); k++)
                {
                    if (0 <= i < j < k < arr.size())
                    {
                        if (abs(arr[i] - arr[j]) <= a && abs(arr[j] - arr[k]) <= b && abs(arr[i] - arr[k]) <= c)
                        {
                            count++;
                        }
                    }
                }
            }
        }
        return count;
    }
};

int main()
{
    vector<int> vec = {1,1,2,2,3};
    Solution obj;
    cout << obj.countGoodTriplets(vec, 0, 0, 1);
    return 0;
}
