#include<iostream>
#include<string>
using namespace std;

class Car {
private:
	string name;
	int top_speed;

public:
	bool automatic_transmission;
	string color;

public:
	void print_car() {
		cout<<name<<" car has "<<top_speed<<" top speed.\n";
	}

	void set_Name(string Name) {
		name = Name;
	}

	void get_name() {
		cout<<name<<"\n";
	}

	void set_topspeed(int Top_speed) {
		if (Top_speed < 100) {
			cout<<"Does not qualify for top speed.\n";
		}
		else {
			top_speed = Top_speed;
			cout<<"Top Speed updated.\n";
		}
	}

	void get_topspeed() {
		cout<<top_speed<<"\n";
	}
};

// void populate_byd(Car *byd_seal_electric) {
// 	byd_seal_electric->set_Name("BYD_Seal");
// 	byd_seal_electric->set_topspeed(top_speed);
// 	byd_seal_electric->color = "blue";
// 	byd_seal_electric->automatic_transmission = true;
// }

void encapsulation() {
	Car byd_seal_electric;
	// string car_name;
	// int top_speed;
	// cin>>car_name>>top_speed;
	// byd_seal_electric.name = "BYD Seal";
	byd_seal_electric.set_Name("BYD_Seal");
	// byd_seal_electric.get_name();
	// byd_seal_electric.color = "blue";
	// byd_seal_electric.automatic_transmission = true;
	// byd_seal_electric.top_speed = 200;
	byd_seal_electric.set_topspeed(80);
	byd_seal_electric.get_topspeed();
	cout<<"------------------\n";
	byd_seal_electric.set_topspeed(200);
	byd_seal_electric.get_topspeed();
	// byd_seal_electric.get_topspeed();

	// Car mercedes_g_wagonl
	// mercedes_g_wagon.color = "Black";
	// mercedes_g_wagon.name = "G Wagon";
	// mercedes_g_wagon.automatic_transmission = true;
	// mercedes_g_wagon.top_speed = 300;
}

void playing_with_addresses(int &a) {
	a = 10;
}

int main() {
	// Car *byd_seal_electric;
	// populate_object(byd_seal_electric);
	// encapsulation();
	int a = 5;
	playing_with_addresses(a);
	cout<<a<<"\n";
}