#include <iostream>
using namespace std;

class Solution
{
public:
    int isSameAfterReversals(int num)
    {
        int reversed = 0;
        int temp = num;
        int digit;
        int reversed2 = 0;
        while (num!=0)
        {
            digit = temp%10;
            reversed  = reversed *10 +digit;
            temp/=10;
        }
        while (reversed!=0)
        {
            digit = reversed%10;
            reversed2  = reversed2 *10 +digit;
            reversed/=10;
        }
        return (reversed2 == num);
    }
};

int main()
{
    Solution obj;
    cout<<obj.isSameAfterReversals(231);
    return 0;
}