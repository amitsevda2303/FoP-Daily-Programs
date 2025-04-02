#include <iostream>
using namespace std;

void hello() { printf("Hello, Amit!"); }
int main()
{
    int a[] = {10, 20, 30, 40};
    int *ptr = a;
    cout << *(ptr + 2) << endl;
    cout << sizeof(int *) << endl;
    cout << sizeof(char *) << endl;
    int arr[] = {1, 2, 3, 4, 5};
    int *p1 = &arr[4];
    int *p2 = &arr[1];
    cout << p1 - p2; // Outputs: 3
    void *ptrr;
    int x = 10;
    ptrr = &x;
    cout << ptrr;
    void (*funcPtr)() = hello;
    funcPtr(); // Outputs: Hello, Amit!
}