//not to be used in recursion
//not to be used during static variables
//not to be used during switch statements and loops

#include <iostream>
using namespace std;
inline int product(int a, int b){ //inline function
    return a*b;
}
int main() {
    int a, b; 
    cout << "Enter the value of a and b:"<<endl;
    cin>>a>>b;
    cout<<"The product of a and b is: "<<product(a, b)<<endl;
    cout<<"The product of a and b is: "<<product(a, b)<<endl;
    cout<<"The product of a and b is: "<<product(a, b)<<endl;
    cout<<"The product of a and b is: "<<product(a, b)<<endl;
    cout<<"The product of a and b is: "<<product(a, b)<<endl;
    cout<<"The product of a and b is: "<<product(a, b)<<endl;
    return 0;
}
