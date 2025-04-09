#include<iostream>
#include<unordered_map>
#include<vector>


using namespace std;

void printMap(unordered_map<int, int> &map1){
    for (auto i : map1)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
} 
void countFreq(vector<int> v){
    unordered_map<int,int> m;
    for (int i: v)
    {
     m[i]++;   
    }
    printMap(m);
}

int main(){
    vector<int> v = {1,2,2,1,1,5,5,6};
    countFreq(v);
}

