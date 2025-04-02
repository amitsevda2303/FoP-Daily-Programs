#include <iostream>
using namespace std;
// scope override
int a = 5;
int main()
{
    // int a = -1;
    int b;
    for (int i = 0; i < 10; i++)
    {
        int a = a + 1;
        int b = 1;
        cout<<a<<endl;
    }
    // cout <<  << "\n"; //garbage value
    return 0;
}