//arrays using do-while loop
#include <iostream>
using namespace std;
int main() {
   int i=0;
    int marks[4]={49, 43, 45, 47};
    do{
        cout<<"the value of marks["<<i<<"]is: " <<marks[i]<<endl;
        i++;
    }
        while(i<=3);

    return 0;
}
