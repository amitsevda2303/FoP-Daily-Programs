#include <iostream>
using namespace std;

class Car
{
private:
    int top_Speed;
    string model;

public:
    string color;
    bool automatic_transmission;
    Car()
    {
        top_Speed = 0;
        model = "";
        automatic_transmission = false;
        color = "";
    }
    void print_car()
    {
        cout << top_Speed << endl;
    }
    void setNAme(int t)
    {
        // model = s;
        if (t<100)
        {
            cout<<"Not Qualified "<<endl;
        }else{
            top_Speed = t;
            cout<<"Qualified speed test"<<endl;
        }
        
        top_Speed = t;
        // automatic_transmission = a;
        // color = c;
    }
    void getNAme()
    {
        cout << model << "\t" << color << "\t" << automatic_transmission << "\t" << top_Speed << endl;
    }
};

// void creating_Objects()
// {
//     //during compilation time
//     Car eco_sport;
//     eco_sport.color = "white";
//     eco_sport.top_Speed = 180;
//     eco_sport.automatic_transmission = false;
//     eco_sport.model = "2015";
//     eco_sport.print_car();

//     //during run time
//     Car* G_wagon = new Car();
//     G_wagon->color = "G-wagon";
//     G_wagon->top_Speed = 250;
//     G_wagon->automatic_transmission = false;
//     G_wagon->model = "2015";
//     G_wagon->print_car();
// }

// encapsulation example
// void encapsulation()
// {
//     Car G_wagon,car2;
// //     // G_wagon.color = "G-wagon";
//     G_wagon.setNAme(250);
//     G_wagon.getNAme();
//     cout<<"-------------------------------------------------"<<endl;
//     car2.setNAme(80);
//     car2.getNAme();
// //     // G_wagon.color = 250;
// //     // G_wagon.automatic_transmission = false;
// //     // G_wagon.model = "2015";

// //     // Car eco_sport;
// //     // eco_sport.color = "white";
// //     // eco_sport.top_Speed = 180;
// //     // eco_sport.automatic_transmission = false;
// //     // eco_sport.model = "2015";
// //     // eco_sport.print_car();
// }

// void populateObject(Car *c)
// {
//     c->color = "Blue";
//     c->automatic_transmission = true;
//     c->setNAme("Tata",250);
//     c->getNAme();
// }
void playWithAddress(int &a){
    a = 10;
}
int main()
{
    int a = 5;
    playWithAddress(a);
    cout<<a;
    // creating_Objects();
    // encapsulation();
    // Car *car = new Car();
    // populateObject(car);
    return 0;
}