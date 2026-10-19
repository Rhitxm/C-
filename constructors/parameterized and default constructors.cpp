//printing a random complex number
//default constructor
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


//parameterised construction
//impliict call
#include <iostream>
using namespace std;
class Complex{
    int a, b;

    public:
    Complex(int , int);
    void printNumber(){
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }
};
Complex::Complex(int x, int y){
    a=x;
    b=y;
}
int main(){
    Complex a={4, 6}; //implicit call
    a.printNumber();
    return 0;
}

