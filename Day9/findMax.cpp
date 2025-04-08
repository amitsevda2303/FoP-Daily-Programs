#include<iostream>
#include<vector>
using namespace std;

class MaxNumber
{
public:
    int maximumNumber(vector<int> &arr){
        int m = arr[0];
        for (int i = 0; i < arr.size(); i++)
        {
            if (m<arr[i])
            {
                m = arr[i];
            }
        } 
        return m;
    }
};


int main(){
    vector<int> arr = {1,2,3,6,4,5};
    MaxNumber obj;
    cout<<obj.maximumNumber(arr);
    return 0;
}