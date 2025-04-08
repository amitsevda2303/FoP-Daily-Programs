#include <iostream>
using namespace std;

class Solution
{
public:
    int divide(int dividend, int divisor)
    {
        int a = dividend/divisor;
              
        return (a>=INT32_MAX)?INT32_MAX:(a<=INT32_MIN)?INT32_MIN:a;
    }
};

int main(){
    Solution obj;
    int dividend = -2147483648, divisor = -1;
    cout<<obj.divide(dividend,divisor);
    return 0;
}