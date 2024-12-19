#include<iostream>
#include<vector>
using namespace std;
int main(void) {
    int t;
    cin >> t;
    while (t--> 0) {
        vector < int > atm;
        int n, k;
        cin >> n >> k;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            atm.push_back(x);
        }
        for (int i = 0; i < n; i++) {
            if (k >= atm[i]) {
                k -= atm[i];
                cout << 1;
            }
            else {
                cout << 0;
            }
        }
        cout<<"\n";
    }
}