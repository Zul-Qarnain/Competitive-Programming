#include <iostream>
#include <string>
#include <cmath>
#include <cctype>
#include <algorithm>
using namespace std;
int main(void) {
    int t;
    cin >> t;
    cin.ignore(std::numeric_limits<streamsize>::max(), '\n'); 
    while (t--) {
        string input;
        getline(cin, input);
        int inputLength = input.length();
        int num = inputLength / 2;
        for (int i = 0; i < inputLength; i++) {
            if (isalpha(input[i])) {
                input[i] += 3;
            }
        }
        reverse(input.begin(), input.end());
        for (int i = num; i < inputLength; i++) {
            input[i] -= 1;
        }
        cout << input << "\n";
    }
}
