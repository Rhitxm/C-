#include <iostream>
using namespace std;
int count=0;
class num{
    public:
    num(){
        count++;
        cout<<"This is the time when constructor is called for object number "<<count<<endl;
    }
    ~num(){ //a destructor is called here
        cout<<"This is the time destructor is called for object number "<<count<<endl;
        count--;
    } //destructors are always called with ~ in the beginning 
};
int main() 
{
    cout<<"We are inside our main function"<<endl;
    cout<<"Creating first object n1"<<endl;
    num n1;
    {
        cout<<"Entering the block"<<endl;
        cout<<"Creating two more objects"<<endl;
        num n2, n3;
        cout<<"Exiting this block"<<endl;

    }
    cout<<"Back to main"<<endl;
    return 0;
}
