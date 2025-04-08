#include <iostream>
using namespace std;

class Solution
{
public:
    string toLowerCase(string s)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i]>=65&&s[i]<=90)
            {
                int a = (int)s[i];
                char b = (char)a+32;
                s[i] = b;
            }
        }
        return s;
    }
};

int main()
{
    Solution obj;
    cout<<obj.toLowerCase("LOVELY");
    return 0;
}