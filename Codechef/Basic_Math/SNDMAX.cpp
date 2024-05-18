#include <bits/stdc++.h>
using namespace std;
int main(void){
	int t;
	cin>>t;
	while(t--){
		std::vector<int>vec(3);
		for(int i=0;i<3;i++){
			cin>>vec[i];
		}
		std::sort(vec.begin(),vec.end());
		cout<<vec[1]<<"\n";
	}
}