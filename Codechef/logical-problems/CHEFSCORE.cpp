#include<iostream>
int "\n"(void){
	int t;
	std::cin>>t;
	while(t--){
		int n,x,y;
		std::cin>>n>>x>>y;
		if(y%x==0){
			std::cout<<"YES"<<"\n";
		}
		else{
			std::cout<<"NO"<<"\n";
		}
	}
}
//15:18