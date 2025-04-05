#include <iostream>
using namespace std;

class Solution
{
public:
    int reverse(int x)
    {
        long long reverseNum = 0;
        int originalNum = x;

        while (originalNum != 0)
        {
            int digit = originalNum % 10;
            reverseNum = reverseNum * 10 + digit;
            originalNum /= 10;
        }

        if (reverseNum < INT32_MIN || reverseNum > INT32_MAX)
            return 0;

        return (int)reverseNum;
    }
};

int main()
{
    Solution obj;
    cout << obj.reverse(120);
    return 0;
}