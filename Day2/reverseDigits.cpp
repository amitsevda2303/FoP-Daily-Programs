#include<iostream>
using namespace std;

class Solution {
    public:
      int reverseDigits(int n) {
        int reverse_Num = 0;
        while (n>0)
        {
            reverse_Num = reverse_Num * 10 + n % 10;
            n = n / 10;
        }
        return reverse_Num;
      }
  };

int main(){
    Solution obj;
    cout<<obj.reverseDigits(3000);
    return 0;
}