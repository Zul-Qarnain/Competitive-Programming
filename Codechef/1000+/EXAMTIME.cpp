#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int num[2][3];
        int dragon = 0, sloth = 0;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 3; j++) {
                cin >> num[i][j];
                if (i == 0) {
                    dragon += num[i][j];
                } else {
                    sloth += num[i][j];
                }
            }
        }
        if (dragon > sloth) {
            cout << "DRAGON\n";
        } else if (dragon < sloth) {
            cout << "SLOTH\n";
        } else {
            if (num[0][0] > num[1][0]) {
                cout << "DRAGON\n";
            } else if (num[0][0] < num[1][0]) {
                cout << "SLOTH\n";
            } else if (num[0][1] > num[1][1]) {
                cout << "DRAGON\n";
            } else if (num[0][1] < num[1][1]) {
                cout << "SLOTH\n";
            } else if (num[0][2] > num[1][2]) {
                cout << "DRAGON\n";
            } else if (num[0][2] < num[1][2]) {
                cout << "SLOTH\n";
            } else {
                cout << "TIE\n";
            }
        }
    }

    return 0;
}
