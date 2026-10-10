//structure for storing employee data
#include <iostream>
using namespace std;
   struct employee {
    int eId;
    char favChar;
    float salary;
};

int main() {
    struct employee Rhitam;

    Rhitam.eId = 1;
    Rhitam.favChar = 'c';
    Rhitam.salary = 42000000;

    cout << "Employee ID is: " << Rhitam.eId << endl;
    cout << "Favourite character of employee: " << Rhitam.favChar << endl;
    cout << "Salary of employee is: " << Rhitam.salary << endl;
   
    return 0;
}
