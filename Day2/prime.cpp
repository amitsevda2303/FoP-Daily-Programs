#include <iostream>
using namespace std;

class Solution
{
public:
    bool isPrime(int n)
    {
        if (n <= 1)
            return false;
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
                return false;
        }
        return true;
    }
};

int main(){
    Solution onj;
    int n;
    cout << "Enter the number: ";
    cin >> n;
    if (onj.isPrime(n))
    {
        cout << n << " is a prime number.\n";
    }
    else
    {
        cout << n << " is NOT a prime number.\n";
    }
    return 0;
}