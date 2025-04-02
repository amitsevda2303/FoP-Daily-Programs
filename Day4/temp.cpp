#include <iostream>
using namespace std;

int main(){
    int celsius = 32;
    double fah = celsius *1.8 +32;
    double fah2 = celsius *9/5+32; //because compiler check all the numbers are integer then it converts value into integer 
    cout<<fah<<"\t"<<fah2<<endl;
    return 0;
}