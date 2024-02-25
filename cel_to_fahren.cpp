/*Write a C++ program that prompts the user to input a temperature in Celsius (as a floating-point
number). The program should then convert the temperature to Fahrenheit using the formula: */
#include <iostream>
using namespace std;
int main() {
    float celsius, fahrenheit;
    cout << "Enter the temperature in Celsius: ";
    cin >> celsius;
    fahrenheit = ((9.0 / 5.0) * celsius) + 32;
    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;
    return 0;
}
