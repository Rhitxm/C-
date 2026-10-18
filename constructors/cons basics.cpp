//constructors are basically construction fo object by setting it's value
//constructor is a special member function with same name as that of the class, it is used to initialise the objects of it's class.
// it is automatically invoked(called) whenever an object is created
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
    a=10;
    b=20;
}

int main(){
    Complex c1, c2, c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();

    return 0;
}
