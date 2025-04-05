#include <iostream>
using namespace std;

class Solution
{
public:
    int fib(int n) {
        if (n<=1)
        {
            return n;
        }else{
            int fact = fib(n-1)+fib(n-2);
            return fact;
        }
        
        
    }
};

int main(){
    Solution obj;
    cout<<obj.fib(5);

}