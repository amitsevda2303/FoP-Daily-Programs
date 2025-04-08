#include <iostream>
using namespace std;

class ComplexSum
{
public:
    float real;
    float imag;
    ComplexSum()
    {
        real = 0;
        imag = 0;
    }
    ComplexSum(float real, float imag)
    {
        this->real = real;
        this->imag = imag;
    }

    void printComplex()
    {
        cout << real << " " << imag << "i" << endl;
    }
    ComplexSum operator +(ComplexSum &c1){
        // ComplexSum temp;
        // temp.real = this->real + c1.real;
        // temp.imag = this->imag + c1.imag;
        return ComplexSum(real + c1.real,imag + c1.imag);
    }
    // void addComplex
    // friend ComplexSum operator+(ComplexSum &c1, ComplexSum &c2);
};

// ComplexSum operator+(ComplexSum &c1,ComplexSum &c2){
//     ComplexSum temp;
//     temp.real = c1.real + c2.real;
//     temp.imag = c1.imag + c2.imag;
//     return temp;
// }

int main()
{
    ComplexSum c1(3.0,7.0);
    ComplexSum c2(2.0,5.0);
    ComplexSum c3 = c1+c2;
    c3.printComplex();

    return 0;
}