#include <iostream>
using namespace std;

class Solution
{
public:
    int addDigits(int num)
    {
        if (num == 0)
        {
            return 0;
        }
        else
        {
            while (num > 9)
            {
                int sum = 0;
                while (num > 0)
                {
                    sum += num % 10;
                    num /= 10;
                }
                num = sum;
            }
            return num;
        }
    }
};

int main()
{
    Solution obj;
    cout << obj.addDigits(38);
    return 0;
}