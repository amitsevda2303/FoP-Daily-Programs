#include <iostream>
using namespace std;

class Solution
{
public:
    bool armstrongNumber(int n)
    {
        bool flag = false;
        int sum = 0;
        int temp;
        int original_val = n;
        while (n > 0)
        {
            temp = n % 10;
            sum += (temp * temp * temp);
            n /= 10;                     
        }
        if (sum == original_val)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    Solution obj;
    int num = 1221;

    if (obj.armstrongNumber(num))
    {
        cout << num << " is an Armstrong number.\n";
    }
    else
    {
        cout << num << " is NOT an Armstrong number.\n";
    }
    return 0;
}