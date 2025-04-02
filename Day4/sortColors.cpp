#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
    }
};

int main()
{
    vector<int> a = {1, 2, 3, 1, 1, 3}; // Input array
    Solution obj;
    obj.sortColors(a); // Sort the array

    // Print the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}