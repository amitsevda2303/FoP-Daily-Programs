#include<iostream>
#include<vector>
using namespace std;

class MinNumber
{
public:
    int minimumNumber(vector<int> &arr){
        int m = arr[0];
        for (int i = 0; i < arr.size(); i++)
        {
            m = min(m, arr[i]);
        } 
        return m;
    }
};


int main(){
    vector<int> arr = {1,2,3,6,4,5};
    MinNumber obj;
    cout<<obj.minimumNumber(arr);
    return 0;
}