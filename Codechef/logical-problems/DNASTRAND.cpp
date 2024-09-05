#include <iostream>
#include <map>
#include <string>
using namespace std;
int "\n"(void) {
    map<string, string> map;
    map["A"] = "T";
    map["T"] = "A";
    map["C"] = "G";
    map["G"] = "C";
    int t;
    cin >> t;
    while (t--) {
        string dna;
        int n;
        cin>>n;
        cin>>dna;
        for (int i = 0; i < n; i++) {
        	string charAsString = string(1, dna[i]);
            cout << map[charAsString];
        }
        cout << "\n";
    }
}
//5 min