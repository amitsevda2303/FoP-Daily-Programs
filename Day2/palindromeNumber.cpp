#include <iostream>
using namespace std;

class Solution {
    public:
      bool isPalindrome(int n) {
          int reverse_Num = 0;
          int original_Num = n;
          while (original_Num > 0)
          {
            reverse_Num = reverse_Num *10 + original_Num %10;
            original_Num /=10;
          }
          return (reverse_Num == n);
      }
  };

int main(){
    Solution obj;
    cout<<obj.isPalindrome(555);
    return 0;
}