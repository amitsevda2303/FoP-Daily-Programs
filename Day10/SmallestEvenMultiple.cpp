#include <iostream>
using namespace std;

class Solution
{
public:
    int smallestEvenMultiple(int n)
    {
        if (n%2==0)
        {
            return n;
        }
        return n*2;
    }
};

int main()
{
    Solution obj;
    cout<<obj.smallestEvenMultiple(5);
    return 0;
}