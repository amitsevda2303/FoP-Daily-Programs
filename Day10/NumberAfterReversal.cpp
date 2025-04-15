#include <iostream>
using namespace std;

class Solution
{
public:
    bool isSameAfterReversals(int a)
    {
        if(a==0) return true;
        if(a>0&&a%10==0) return false;
        return true;
    }
};

int main()
{
    Solution obj;
    cout<<obj.isSameAfterReversals(12800);
    return 0;
}