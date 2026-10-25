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
        cout<<"Addition of the two numbers are: "<<a+b<<endl<<endl;
        cout<<"Subtraction of the two numbers are: "<<a-b<<endl<<endl;
        cout<<"Multiplication of the two numbers are: "<<a*b<<endl<<endl;
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
