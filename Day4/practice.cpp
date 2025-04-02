#include<iostream>
using namespace std;

int main(){
    int arr[] = {2,3,6,7,5,9,10}; // Declare an array of integers
    int *p_a = arr;              // Initialize a pointer to the start of the array
    p_a += 2;                    // Move the pointer two positions forward (points to arr[2])
    p_a += p_a[-1];              // Add the value at one position before the current pointer (p_a[-1]) to the pointer
    cout<<*p_a<<endl;            // Dereference the pointer and print the value it points to
    return 0;
}