#include<iostream>
using namespace std;

int main(){
    int n = 64;
    return ((n>0) && ((n&(n-1))== 0));
}