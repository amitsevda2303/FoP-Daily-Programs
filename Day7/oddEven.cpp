#include <iostream>
using namespace std;

class Solution
{
public:
    bool isEven(int n)
    {
        return (n % 2 == 0);
    }
};

int main(){
    Solution obj;
    cout<<obj.isEven(4);
    return 0;
}