#include<iostream>
int main(void){
	int t;
	std::cin>>t;
	while(t--){
	int n,count=0;
	std::string s;
	std::cin>>n>>s;
	for(int i=0;i<n-1;i++){
		if((s[i]==s[i+1]))
			count+=1;
	}
	std::cout<<count<<"\n";
	}
}