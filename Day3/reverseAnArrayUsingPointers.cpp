#include<iostream>
using namespace std;

int main(){
    int arr[] = {10,20,30,40,50};
    int *ptr = arr;
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n/2; i++)
    {
        int temp = *(ptr+i);
        *(ptr+i) = *(ptr+n-i-1);
        *(ptr +n-i-1) = temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<*(ptr+i)<<" ";
    }
    
}