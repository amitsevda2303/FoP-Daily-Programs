#include <iostream>
using namespace std;

class Overload
{
private:
    int a;
    int b;
public:
    Overload(){
        a = 0;
        b=0;
    }
    Overload(int x,int y){
        a = x;
        b = y;
    }
    Overload operator++() {
        ++a;
        ++b;
        return Overload(this->a,this->b);
    }    
    Overload operator++(int) {//we use the dummy int parameter
        a++;
        b++;
        return Overload(this->a,this->b);
    }    
    void show(){
        cout<<a<<" "<<b<<endl;
    }
};

int main(){
    Overload obj(5,10),obj2;
    obj++;
    ++obj;
    obj.show();
    obj2.show();
    return 0;
}