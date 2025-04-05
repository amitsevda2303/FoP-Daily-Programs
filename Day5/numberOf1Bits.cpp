#include <iostream>
using namespace std;

class Solution
{
public:
    int hammingWeight(int n)
    {
        int count = 0;
        while (n>0)
        {
            if (n%2==1)
            {
                count++;
            }
            n/=2;
        }
        return count;   
    }
};

int main(){
    int n  = 2147483645;
    Solution obj;
    cout<<obj.hammingWeight(n);
    return 0;
}