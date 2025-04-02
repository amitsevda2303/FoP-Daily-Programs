#include <iostream>
using namespace std;
struct Student
{
    char name[20];
    int roll_no;
};


int main(){
    // int a[5];
    // int a= 4;
    // int *ptr = a;
    // cout<<ptr <<" "<< a<<endl;

    struct Student cc[4];
    cc[0].roll_no = 15;
    cc[1].roll_no = 14;
    cc[2].roll_no = 13;
    cc[3].roll_no = 12;
    cout<<cc<<endl;
    struct Student *ptr_cc = cc+3;
    cout<<(*ptr_cc).roll_no<<"\n";
    
    return 0;
}