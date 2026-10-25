//creating a simple calculator using c++
#include <iostream>
using namespace std;
class SimpleCalculator{
    float a, b;
    public:
    void getNumbers(){
        cout<<"Enter the value of first number: ";
        cin>>a;
        cout<<"Enter the value of the second number: ";
        cin>>b;
    }
    void calculate(){
        cout<<"Addition of the two numbers are: "<<a+b<<endl<<endl; //prints addition of two numbers
        cout<<"Subtraction of the two numbers are: "<<a-b<<endl<<endl; //prints subtracion of two numbers
        cout<<"Multiplication of the two numbers are: "<<a*b<<endl<<endl; //prints product of two numbers
        if(b!=0){
            cout<<"Division of the two numbers are: "<<a/b<<endl<<endl;
        }
        else{
            cout<<"Division not possible(denominator=0)"<<endl<<endl;
        }
    }    
};

int main() 
{
    SimpleCalculator calc;
    calc.getNumbers();
    calc.calculate();
    return 0;
}
