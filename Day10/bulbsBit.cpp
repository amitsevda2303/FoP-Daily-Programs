#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    int changeBulbsBit(vector<int> A){
        int count=0;
        for (int i = 0; i < A.size(); i++)
        {   
            // if (i == A.size()-1 && A[i] == 0)
            // {
            //     A[i] = (A[i] == 0) ? 1 : 0;
            //     count++;
            //     continue;
            // }
            
            // if (A[i]==0)
            // {
            //     A[i] =1;
            //     for (int j = i+1; j < A.size(); j++)
            //     {
            //         A[j] = (A[j]==0)?1:0;
            //     }
            //     count++;
                
            // }

            if (A[i]==0 && count%2 == 0)
            {
                count++;
            }
            else if(A[i]==1 && count%2 != 0){
                count++;
            }
            
        }
        return count;
    }
};

int main(){
    vector<int> a = {0,1,0,1};
    Solution obj;
    cout<<obj.changeBulbsBit(a);
    return 0;
}