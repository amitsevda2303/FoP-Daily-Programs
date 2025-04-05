#include<iostream>
using namespace std;

struct Student{ //  24 byte
	char name[20];
	int roll_no;
};

void shifting_pointer_in_array(){
	int a[7] = {2,3,6,7,5,9,10};
	int *p_a = a;
	cout<<(*p_a)<<"\t"<<p_a[0]<<"\n"; // 2 2
	p_a += 2;
	cout<<(*p_a)<<"\n"; // 6
	cout<<(p_a[-1])<<"\n"; // 3
	p_a += p_a[-1];
	cout<<(*p_a)<<"\n"; // 9
}

void playing_with_structs() {
	struct Student cc[4];
	// cout<<cc<<"\n";
	struct Student *ptr_cc = cc;
	// ptr_cc = ptr_cc+1;
	// cout<<ptr_cc<<"\n";

	cc[0].roll_no = 20;
	cc[3].roll_no = 2;

	// ptr_cc += 3;
	// cout<<(*ptr_cc)<<"\n";
	// cout<<(*ptr_cc).roll_no<<"\n";
	cout<<ptr_cc->roll_no<<"\n";
}

void basics() {
	int x = 4;
	int *ptr_x = &x;
	// cout<<ptr_x<<"\n";

	*ptr_x = 5;
	// cout<<x<<"\n";

	// int *ptr_4 = x;
	// cout<<ptr_4<<"\n";

	// int *ptr1 = 0x246fcf8;
	// cout<<(*ptr1)<<"\n";
}

void pointers_in_arrays() {
	int a[5];
	int *ptr_a = a;
	// cout<<ptr_a<<"\t"<<a<<'\n';
	// cout<<(ptr_a==a)<<"\n";
}

int main() {
	// basics();
	// pointers_in_arrays();
	playing_with_structs();
	// shifting_pointer_in_array();
}