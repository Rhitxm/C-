//function to print sum of real and imaginary part of two complex numbers

#include <iostream>
using namespace std;
class Complex;
class Calculator{
    public:
    int add(int a, int b){
        return(a+b);
    }
    int sumRealComplex(Complex, Complex);
    int sumImgComplex(Complex, Complex);
};
class Complex{
    int a,b;
    friend int Calculator::sumRealComplex(Complex, Complex); //friend function
    friend int Calculator::sumImgComplex(Complex, Complex);  //friend function
    public:
    void setNumber(int n1, int n2){
        a=n1;
        b=n2;
    }
    void printNumber(){
        cout<<"Your number is: "<<a<<" + "<<b<<"i"<<endl;
    }
};    

int Calculator::sumRealComplex(Complex o1, Complex o2){
    return o1.a+o2.a;
}

int Calculator::sumImgComplex(Complex o1, Complex o2){
    return o1.b+o2.b;
}

int main() 
{
    Complex o1,  o2;
    o1.setNumber(1, 4);
    o1.printNumber();

    o2.setNumber(5, 8);
    o2.printNumber();

    Calculator calc;
    int real= calc.sumRealComplex(o1, o2);
    cout<<"The sum of the real part of o1 and o2 is: "<<real<<endl;

    int Img= calc.sumImgComplex(o1, o2);
    cout<<"The sum of the imaginary part of o1 and o2 is: "<<Img<<endl;

    return 0;
}
