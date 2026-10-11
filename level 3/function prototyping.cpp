//printing sum of two numbers using function-prototyping
#include <iostream>
using namespace std;
int sum(int a, int b);

   int main(){
       int num1, num2;
       cout<<"enter first number: "<<endl;
       cin>>num1;
       cout<<"enter second number: "<<endl;
       cin>>num2;
       cout<<"the sum is: "<<sum(num1, num2)<<endl; //actual parameters
           return 0;
}
       int sum(int a, int b){ //formal parametres
      int c=a+b;
      return c;
       }
