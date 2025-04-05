#include <iostream>
using namespace std;
class Solution
{
public:
    int sum(int num1, int num2)
    {
        return (num1 +num2);
    }
};

int main()
{
    Solution obj;
    cout<<obj.sum(-10,4);
    return 0;
}