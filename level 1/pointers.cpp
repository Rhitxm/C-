//continue skips the specified number
#include <iostream>
using namespace std;
int main() {
    int a=3;
    int *b= &a;
    cout<<"this is the address of the operator: "<<b<<endl;
    //this is also known as deference operator as it gives the value at the pointer
    cout<<"this is the value at address of the operator: "<<*b<<endl;
    return 0;
}
