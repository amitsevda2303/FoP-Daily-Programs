#include <iostream>
using namespace std;

class Car
{
public:
    string name;
    int top_speed;
    bool automatic_transmission;
    string color;

    Car()
    {
        name = "";
        top_speed = 0;
        automatic_transmission = false;
        color = "";
    }
    Car(string n, int t, bool a, string c)
    {
        name = n;
        top_speed = t;
        automatic_transmission = a;
        color = c;
    }

    Car(Car &a)
    {
        this->color = a.color;
        this->name = a.name;
        this->automatic_transmission = a.automatic_transmission;
        this->top_speed = a.top_speed;
    }

    void print_car()
    {
        cout << name << " car has " << top_speed << " top speed.\n";
    }
};

int main()
{
    Car obj("VOLVO", 250, true, "white");
    Car obj2(obj);
    obj.print_car();
}