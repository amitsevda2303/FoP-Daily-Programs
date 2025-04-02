#include <iostream>
using namespace std;

int main(){
    int n=5;
    // cout<<"Enter the number: ";
    // cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = n-i; j >=1; j--)
        {
            cout<<" ";
        }
        for (int k = 1; k <= (2*i-1); k++)
        {
            (k%2==0)?cout<<" ":(i%2==0)?cout<<"#":cout<<"*";
        }
        
        cout<<endl;
    }
    
    return 0;
}