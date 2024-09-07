#include <iostream>
#include <cmath>
int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int num;
        std::cin >> num;
        if (num <= 1) {
            std::cout << "no" << "\n";
        } else { 
            bool isPrime = true;
            for (int i = 2; i <= sqrt(num); ++i) {
                if (num % i == 0) {
                    isPrime = false;
                    break; 
                }
            }
            if (isPrime) {
                std::cout << "yes" << "\n";
            } else {
                std::cout << "no" << "\n";
            }
        }
    } 
    return 0; }