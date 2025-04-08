#include<iostream>
#include<string>
using namespace std;

struct shape {
public:
	int side; // #(sides)
	int l1, l2;
	double area;

	double area_of(double radius) {
		area = 3.142 * radius * radius;
	}
	double area_of(double base, double height) {
		area = 0.5 * base * height;
	}
	int area_of(int side) {
		area = side*side;
	}
	int area_of(int length, int breadth) {
		area = length * breadth;
	}

};


void understanding_polymorphism() {
	struct shape triangle, circle, square, rectangle;
	triangle.side = 3;
	circle.side = 1;
	square.side = 4;
	rectangle.side = 4;

	// square.side = 4;
	square.area_of(4);
	circle.area_of(1.0);
	
	cout<<square.area<<"\n";
	cout<<circle.area<<"\n";
	// cout<<circle.area_of(1)

	// cout<<area(triangle)<<"\n";
	// cout<<area(square)<<"\n";
}

int main() {
	understanding_polymorphism();
}