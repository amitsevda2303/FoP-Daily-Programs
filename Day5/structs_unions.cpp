#include<iostream>
using namespace std;

union UNION{
	int a;
	char c;
	float f;
} Union1, Union2 ;

struct STRUCT {
	int a;
	char c;
} Struct;

void learning_union() {
	union UNION Union;
	Union.a = 65;
	cout<<"Union : "<<"\n";
    cout << "Address of a: " << &Union.a << "\n";
    cout << "Address of c: " << &Union.c << "\n";
    cout << "Address of f: " << &Union.f << "\n";
}

void playing_with_struct() {
	Struct.c = 'Q';
	Struct.a = 12;
	struct STRUCT *ptr_Struct = &Struct;
	cout<<"structure:";
	cout << "Structure:" << "\n";
    cout << "Address of a: " << &(ptr_Struct->a) << "\n";
    cout << "Address of c: " << &(ptr_Struct->c) << "\n";
}

int main() {
	playing_with_struct();
	learning_union();
	// cout<<sizeof(float)<<"\n";
}