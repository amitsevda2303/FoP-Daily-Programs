#include<iostream>
#include<string>
using namespace std;

typedef struct pet1 {
	string name;
	int age;
	person() {
		cout<<"Default constructor initialised.\n";
	}
	void sayHi() {
		cout<<"Hi.\n";
	}
} pet;

struct person {
	string name;
	int age;
	person() {
		cout<<"Default constructor initialised.\n";
	}
	void sayHi() {
		cout<<"Hi.\n";
	}
};

struct Student: private person {
	//
};

class Car {
public:
	string name;
	int top_speed;
	bool automatic_transmission;
	string color;

	void print_car() {
		cout<<name<<" car has "<<top_speed<<" top speed.\n";
	}
};

void creating_objects() {
	// during compilation time
	Car byd_seal_electric;
	byd_seal_electric.name = "BYD Seal";
	byd_seal_electric.color = "blue";
	byd_seal_electric.automatic_transmission = true;
	byd_seal_electric.top_speed = 200;

	// creating objects during runtime
	Car *mercedes_g_wagon = new Car();
	(*mercedes_g_wagon).color = "Black";
	mercedes_g_wagon->name = "G Wagon";
	mercedes_g_wagon->automatic_transmission = true;
	mercedes_g_wagon->top_speed = 300;

	byd_seal_electric.print_car();
	mercedes_g_wagon->print_car();
}

void playing_with_structs() {
	struct Student Garvit;
	Garvit.name = "Garvit";
}

int main() {
	// creating_objects();
	playing_with_structs();
}