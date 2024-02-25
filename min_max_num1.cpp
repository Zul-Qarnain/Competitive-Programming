#include <iostream>
using namespace std;
int main() {
    int num1, num2, num3;
    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;
    int largest = num1;
    int smallest = num1;
    if (num2 > largest)
        largest = num2;
    else if (num2 < smallest)
        smallest = num2;
    if (num3 > largest)
        largest = num3;
    else if (num3 < smallest)
        smallest = num3;
    cout << "The largest number is: " << largest << endl;
    cout << "The smallest number is: " << smallest << endl;
    return 0;
}
