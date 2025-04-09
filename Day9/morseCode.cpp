#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int uniqueMorseRepresentations(vector<string> &words)
    {
        string arr[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",
                        ".---","-.-",".-..","--","-.","---",".--.","--.-",".-.",
                        "...","-","..-","...-",".--","-..-","-.--","--.."};

        vector<string> v;

        for (int i = 0; i < words.size(); i++)
        {
            string code = "";
            for (int j = 0; j < words[i].size(); j++)
            {
                code += arr[words[i][j] - 'a'];
            }

            bool found = false;
            for (int k = 0; k < v.size(); k++)
            {
                if (v[k] == code)
                {
                    found = true;
                    break;
                }
            }

            if (!found)
            {
                v.push_back(code);
            }
        }

        return v.size();
    }
};

int main()
{
    Solution s;
    vector<string> words = {"gin", "zen", "gig", "msg"};
    cout << "Unique Morse Code Representations: "
         << s.uniqueMorseRepresentations(words) << endl;

    return 0;
}
