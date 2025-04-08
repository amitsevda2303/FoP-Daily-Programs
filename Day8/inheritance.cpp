#include<iostream>
#include<string>
using namespace std;

class Living_Beings {
public:
	int lifecycle;
	void tell_lifecycle() {
		cout<<"My lifecyle is "<<lifecycle<<" days.\n";
	}
};

class Mammals: public Living_Beings {
public:
	void giving_birth();
	void tell_lifecycle() {
		cout<<"Printing in Mammals class.\n";
	}
	void speak() {
		cout<<"Hi, my lifecycle is "<<lifecycle<<" days.\n";
	}
};

class HomoSapiens: public Mammals {
public:
	string name;

private:
	HomoSapiens() {
		//
	};
	HomoSapiens(string Name, int life_cycle) {
		name = Name;
		lifecycle = life_cycle;
	}
public:
	void coding() {
		cout<<"Hi, I can code. Other mammals can't.\n";
	}
	void speak() {
		cout<<"Hi, I am "<<name<<".\n";
		cout<<"My lifecycle is "<<lifecycle<<" days.\n";
	}
public:
};

void inheritance_access_specifier() {
	Mammals mammal1;
	mammal1.lifecycle = 10;
	mammal1.tell_lifecycle();
}

void learning_inheritance() {
	HomoSapiens himanshu("Himanshu", 4);
	// himanshu.name = "Himanshu";
	// himanshu.lifecycle = 4;
	himanshu.speak();
	// cout<<himanshu.lifecycle<<"\n";
}

int main() {
	// inheritance_access_specifier();
	learning_inheritance();
}