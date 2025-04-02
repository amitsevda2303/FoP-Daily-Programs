#include <iostream>
using namespace std;



int fibonacciRecursion(int n){
    if (n<=1)
    {
        return n;
    }
    else
    {
        return fibonacciRecursion(n-1)+fibonacciRecursion(n-2);
    }
    
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout<<fibonacciRecursion(n)<<" ";
}