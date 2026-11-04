//Dynamically allocate an array and calculate its sum
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter size: ";
    cin >> n;

    int *arr = new int[n];

    cout << "Enter elements: ";

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Sum = " << sum;

    delete[] arr;

    return 0;
}

