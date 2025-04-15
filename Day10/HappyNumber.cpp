#include <iostream>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    bool isHappy(int n)
    {
        unordered_set<int> seen;
        while (n != 1)
        {

            if (seen.find(n) != seen.end())
            {
                return false;
            }

            seen.insert(n);

            int sum = 0;
            while (n > 0)
            {
                int digit = n % 10;
                sum += digit * digit;
                n = n / 10;
            }
            n = sum;
        }
        return true;
    }
};

int main()
{
    Solution obj;
    cout << obj.isHappy(2);
    return 0;
}
