#include <iostream>
using namespace std;
int main() {
    int i;
    int arr[10];
    cout << "Enter the values of array: ";
    for (i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    for (i = 0; i < 10; i++) {
        bool isPrime = true;
        if (arr[i] <= 1) {
            isPrime = false; 
        } else if (arr[i] <= 3) {
            isPrime = true; 
        } else if (arr[i] % 2 == 0 || arr[i] % 3 == 0) {
            isPrime = false; 
        }
        if (isPrime) {
            cout << arr[i] << " is a prime number." << endl;
        }
    }
    return 0;
}
