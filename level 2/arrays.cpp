//type 1
#include <iostream>
using namespace std;
int main() {
   int marks[4]={23, 45, 56, 89};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    
    return 0;
}

//type 2
#include <iostream>
using namespace std;
int main() {
   int mathsMarks[4];
    mathsMarks[0]=278;
    mathsMarks[1]=738;
    mathsMarks[2]=378;
    mathsMarks[3]=578;

    cout<<"Maths marks are: "<<endl;
    cout<<mathsMarks[0]<<endl;
    cout<<mathsMarks[1]<<endl;
    cout<<mathsMarks[2]<<endl;
    cout<<mathsMarks[3]<<endl;

    return 0;
}
