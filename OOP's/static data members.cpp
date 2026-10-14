//storing employee information using static data members (this method does not preserve employee count)

#include <iostream>
using namespace std;

class Employee{
    int Id;
    public:
    void setData(void){
        cout<<"Enter the Id "<<endl;
        cin>>Id;
    }
    void getData(void){
        cout<<"The Id of the employee is: "<<Id<<endl;
    }
};
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
