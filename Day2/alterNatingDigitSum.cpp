#include <iostream>
using namespace std;

int main(){
    int n = 886996;
    int temp =n;
    int count=0;
    int digits[count];
    int sum = 0;
    while (temp>0)
    {
        count++;
        temp/=10;
    }
    temp= n;
    for (int i = count-1; i >=0; i--)
    {
        digits[i]= temp%10;
        temp/=10;
    }
    for (int i = 0; i < count; i++)
    {
        if (i==0)
        {
            sum+=digits[i];
        }else if(i%2==0){
            sum+=digits[i];
        }else{
            sum-=digits[i];
        }
        
    }
    cout<<sum;
    
    return 0;
}