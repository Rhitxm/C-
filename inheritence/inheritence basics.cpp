/* 1) To incrase reusability of classes
2) Also used to edit things with ease
The existing class is called the base class.
The inherited class is caleed derived class
Forms of inheritence:
multiple inheritence
hierarchical inheritance
multi-level inheritance
hybrid inheritance
single inheritance
*/

#include <iostream>
using namespace std;
class Employee{
    public:
    int id;
    float salary;
    Employee (int inpId){
        id=inpId;
        salary=34.0;
    }Employee(){} //constructor called
};
//public visibility: Public members of the base class becomees public members of the derived class
//private visibility: private members of the base class becomes private members of the derived class
//private members are never inherited
//programmer class derived from the base class
class Programmer:public Employee{ //makes the entire employee class public
    public:
    int languageCode;
    Programmer(int inpId){
        id=inpId;
        languageCode=9;
    }
    void getData(){
        cout<<id<<endl;
    }
};
int main() 
{
    Employee rhitam(1), sumedh(2);
    cout<<"salary is Rhitam is: "<<rhitam.salary<<endl;
    cout<<"salary is Sumedh is: "<<sumedh.salary<<endl;
    Programmer skillF(10);
    cout<<skillF.languageCode<<endl;
    cout<<skillF.id<<endl;
    skillF.getData();
    return 0;
}
