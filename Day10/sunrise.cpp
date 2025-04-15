#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    int checkSunrise(vector<int> arr){
        int count = 0;
        int maxheight = arr[0];
        for (int i = 0; i < arr.size(); i++)
        {
            if (i == 0)
            {
                count++;
                continue;
            }
            if (arr[i]>maxheight)
            {
                count++;
                maxheight = arr[i];
            }  
        }
        return count;
    }
};

int main(){
    vector<int> arr = {7, 7, 8, 3, 2, 8, 9 ,7};
    Solution obj;
    cout<<obj.checkSunrise(arr);
    return 0;
}