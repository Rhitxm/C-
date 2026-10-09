//age determination using if-else
#include <iostream>
using namespace std;
int main() {
    int age;
    cout<<"tell me your age"<<endl;
    cin>>age;
    if(age<18){
        cout<<"you cannot come to the party"<<endl;
    }
    else if(age==18){
        cout<<"you will get a child pass and can come to the party"<<endl;
    }
    else{
        cout<<"you can come to the party"<<endl;
    }
    return 0;
}
