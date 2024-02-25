/*Write a C++ program that prompts the user to input a temperature in Celsius (as a floating-point
number). The program should then convert the temperature to Fahrenheit using the formula: */
#include <iostream>
using namespace std;
int main() {
    float celsius;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;
    cout << "Temperature in Fahrenheit: " << (celsius * 9/5) + 32 << endl;
    return 0;
}
