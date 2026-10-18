//printing a random complex number

#include <iostream>
using namespace std;
class Complex{
    int a, b;
    public:
    Complex(void); //constructor declaration
    void printNumber(){
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }
};
Complex::Complex(void){  //--> this is default constructors as it takes no parameter
  //set any value of a and b you want
    a=0;
    b=0;
}

int main(){
    Complex a;
    a.printNumber();
    return 0;
}
