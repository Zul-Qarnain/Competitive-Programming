#include<iostream>
int main(void){
	int t;
	std::cin>>t;
	while(t--){
		int x,y,z;
		std::cin>>x>>y>>z;
		std::cout<<((x*5)+(y*10))/z<<"\n";
	}
}