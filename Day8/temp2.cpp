#include <iostream>
using namespace std;
class living_beings
{
public:
    int lifecycle;
    void movement() {}
    void tell_lifecycle()
    {
        cout << "mammal life" << lifecycle << "days";
    }
//     void speak()
//     {
//         cout << "hi my name is himanshu";
//     }
};

class mammals : public living_beings
{
public:
    // lifecycle = 10;
    void giving_birth();
    void tell_lifecycle()
    {
        cout << "mammals lifecycle is printing";
    }
};
class homoSpaiens : public mammals
{
public:
    string name;
    void coding()
    {
        cout << "nhi aatiiiii"<<endl;
    }
    void speack()
    {
        cout << "hi i am " << name << "\n";
    }
};
void inheritance_access_specifier()
{
    mammals mammal1;
    mammal1.lifecycle = 10;
    mammal1.tell_lifecycle();
}
void learining_inheritance()
{
    homoSpaiens himanshu;
    himanshu.name = "himanshu";
    himanshu.coding();
    himanshu.speack();
}
int main()
{
    // inheritance_access_specifier();
    // int x = 1, y = 10;
    // cout << x++ + y;
    learining_inheritance();
}