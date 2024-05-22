#include<iostream>
int main(void){
	int t;
	std::cin>>t;
	while(t--){
	std::string S,T;
	std::cin>>S>>T;
	for(int i=0;i<5;i++){
		std::string result = (S[i]==T[i]) ? "G" : "B";
		std::cout<<result;
	}
	std::cout<<"\n";
	}
}