//continue skips the specified number
#include <iostream>
using namespace std;
int main() {
    int a=3;
    int *b= &a;
    int **c= &b;
    cout<<"the address of b is: "<< &b<<endl;
    cout<<"the address of b is: "<< c<<endl;
    cout<<"the value of addess at c is: "<< *c<<endl;
    //this is pointer to pointer operation
    cout<<"the value at address value_at(value_at(c)) is: "<<**c<<endl;
    
    return 0;
}
