#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<double> convertTemperature(double celsius)
    {
        double f = (9.0 / 5) * celsius + 32;
        double k = 273.15 + celsius;
        vector<double> v;
        v.push_back(k);
        v.push_back(f);
        return v;
    }
    void printVector(vector<double> v){
        for (int i = 0; i < v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
    }
};
int main()
{
    Solution obj;
    vector<double> a = obj.convertTemperature(36.50);
    obj.printVector(a);
    return 0;
}