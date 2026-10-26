#include <iostream>
#include<cmath>
using namespace std;
class ScientificCalculator{
    float a;
public:
void getNumber(){
    cout<<"Enter your number: ";
    cin>>a;
}    
void calculate(){
cout<<"Sqaure of the number is: "<<pow(a, 2)<<endl; //you can get nth powered results
cout<<"Square root of the number is: "<<sqrt(a)<<endl; //provides exact sqaure rot of the number
cout<<"Logarithm of the number is: "<<log(a)<<endl;
cout<<"Modulus of the given number is: "<<fabs(a)<<endl;
}
};
int main(){
    ScientificCalculator calc;
    calc.getNumber();
    calc.calculate();
    return 0;
}
