#include<iostream>
#include<map>
#include<iterator>
using namespace std;

void populate_map(map<int,string> &plus_one){
    plus_one[1] = "Amit";
    plus_one[2] = "Alok";
    plus_one[3] = "Lakshya";
}

void printMap(map<int, string> &map1){
    for (auto i : map1)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    // map<int,string>:: iterator it;
    // for( it = map1.begin();it != map1.end();it++){
    //     cout<<it->first<<" "<<it->second<<endl;
    // }
}
// int mapFunc(map<int,int> m){
//     for ()
//     {

//     }
// }

// int main(){
//     vector<int> arr;
//     cout<<"Enter element in array:";
//     for (int i = 0; i < 5; i++)
//     {
//         int a;
//         cin>>a;
//         arr.push_back(a);
//     }
    
//     vectorFunc(arr);
    
// }

int main(){
    map<int, string> plus_one;
    populate_map(plus_one);
    printMap(plus_one);
    return 0;
}