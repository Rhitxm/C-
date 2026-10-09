//setw is used to give desired spaces in front of the printed value
#include <iostream>
#include<iomanip>
using namespace std;
int main() {
    int a=4;
    //without setw no spaces will be created in front of th integer
    cout<<"value without setw:"<<a<<endl;
    //with setw spaces will be created in front of the printed value
    cout<<"value with setw:"<<setw(4)<<a<<endl;
    return 0;
}
