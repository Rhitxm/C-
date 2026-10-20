

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


//printing two values using default arguments


#include <iostream>
using namespace std;
class Simple{
    int data1;
    int data2;
    public:
    Simple(int a, int b=9){ //default argument
        data1=a;
        data2=b;
    }
    void printData();
};
void Simple::printData(){
    cout<<"The value of data1 and data2 is "<<data1<<" and "<<data2<<endl;
}
int main(){
    Simple s(1);
    s.printData();
    return 0;
}
