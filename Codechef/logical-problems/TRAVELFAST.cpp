#include <iostream>
int main(void) {
    int t;
    std::cin >> t;
    while (t--) {
        int car, bike;
        std::cin >>bike>>car;
        std::string output = (car == bike) ? "SAME" : (car > bike) ? "BIKE" : "CAR";
        std::cout << output << "\n";
    }}