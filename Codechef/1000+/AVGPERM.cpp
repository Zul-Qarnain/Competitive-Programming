#include<iostream>
using namespace std;
int main(void) {
    int t;
    cin >> t;
    while (t--> 0) {
        int n, avg = 0;
        cin>>n;
        for (int i = n; i > 2; i--) { //6
            avg = avg + (n + (n - 1) + (n - 2)) / 3;
        }
        for (int i = 0; i < avg; i++) {
            cout << i++;
        }
    }
}