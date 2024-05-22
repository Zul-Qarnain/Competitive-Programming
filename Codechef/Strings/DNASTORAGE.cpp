#include <iostream>
int main(void) {
	int t;
	std::cin>>t;
	while(t--){
	std::string mystr;
    int n, post = 0;
    std::cin >> n;
    std::cin >> mystr;
    std::string myarr[2][4] = {
        {"00", "01", "10", "11"},
        {"A", "T", "C", "G"}
    };
    for (int i = 0; i <n/2; i++) { 
        for (int j = 0; j < 4; j++) {
            if (myarr[0][j] == mystr.substr(post, 2)) { 
                std::cout << myarr[1][j];  
                post += 2;
                break;
            } 
        }
    }
    std::cout<<"\n";
	}
}
