//arrays using while loop
#include <iostream>
using namespace std;
int main() {
   int i=0;
    int marks[4]={49, 43, 45, 47};
    while(i<=3){
        cout<<"The value of marks ["<<i<<"] is: " <<marks[i]<<endl;
        i++;
    }

    return 0;
}
