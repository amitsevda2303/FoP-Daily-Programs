#include <iostream>
using namespace std;

class Overload
{
private:
    int a;
public:
    Overload(){
        a = 0;
    }
    Overload(int x){
        a = x;
    }
    Overload operator++() {
        Overload temp;
        temp.a = ++a;
        return temp;
    }
    void show(){
        cout<<a;
    }
};

int main(){
    Overload obj(5),obj2;
    obj2 = ++obj;
    obj2.show();
    obj.show();
    return 0;
}