#include <iostream>
using namespace std;

class Solution
{
public:
    bool checkPerfectNumber(int num)
    {
        int sum = 0;
        if (num <= 0)
        {
            return false;
        }

        for (int i = 1; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                sum += i;
            }
        }

        return sum == num;
    }
};

int main()
{
    Solution obj;
    cout << obj.checkPerfectNumber(28);
    return 0;
}