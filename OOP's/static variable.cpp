//used to preserve count
//storing employee information by preserving the count
//static variables are used to link class
//also known as class variable
//visibility : Inside class
//life: till the program terminates

#include <iostream>
using namespace std;

class Employee{
    int Id;
    static int count;
    public:
    void setData(void){
        cout<<"Enter the id: "<<endl;
        cin>>Id;
    }
    void getData(void){
        cout<<"The id of this employee is: "<<Id<<" and this is employee number "<<count+1<<endl;
        count++;
    }
    };
int Employee::count;
    
int main(){
    Employee harry, rohan, lovish;
    harry.setData();
    harry.getData();

    rohan.setData();
    rohan.getData();

    lovish.setData();
    lovish.getData();
    return 0;
}
