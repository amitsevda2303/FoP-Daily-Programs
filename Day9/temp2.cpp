#include<iostream>
using namespace std;

class Parent{
    public:
        void breathe(){
            cout<<"Parent is breathing";
        }
};

class Child : public Parent{
    public:
        void breathe(){
            cout<<"Child is breathing";
        }
};

int main(){
    // Parent p1 = new Parent();
    // Child *c1 = new Child();
    // Parent *p = c1;
    // Child *c = p1;
    // p->breathe();
    // c->breathe();
}