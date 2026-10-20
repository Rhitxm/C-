#include <iostream>
using namespace std;
class Complex{
    int a, b;
    public:
    Complex(int x, int y=2){
    a=x;
    b=y;
    }
    Complex(int x=1, int y){
        a=x;
        b=y;
    }
    void printNumber();
};

void Complex::printNumber(){
    cout<<"The complex number is "<<a<<" + "<<b<<"i"<<endl;
}


int main(){
    Complex c1(3);
    c1.printNumber();

    Complex c2(1, 6);
    c2.printNumber();
    return 0;
}
