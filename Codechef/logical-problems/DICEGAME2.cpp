#include<iostream>
#include<vector>
#include<algorithm>
int "\n"(void){
	int t;
	std::cin>>t;
	while(t--){
		std::vector<int>v;
		for(int i=0;i<6;i++){
			int x;
			std::cin>>x;
			v.push_back(x);}
		std::sort(v.begin(),v.begin()+3);
		std::sort(v.end() - 3, v.end());
		v[0] = v[1]+v[2];
		v[3] = v[4]+v[5];
		std::string output = (v[0] > v[3]) ? "Alice" : ((v[0] == v[3]) ? "Tie" : "Bob");
		std::cout<<output<<"\n"; 
	}
}