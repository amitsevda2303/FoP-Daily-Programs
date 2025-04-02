#include <iostream>
using namespace std;

class Solution
{
public:
  int seriesSum(int n)
  {
    int sum = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //   sum += i;
    // }
    sum = n*(n+1)/2;
    //it can be done in o(n) time complexity
    return sum;
  }
};

int main()
{
  Solution obj;
  int n;
  cout << "Enter the number: ";
  cin >> n;
  cout << obj.seriesSum(n) << endl;
  return 0;
}
