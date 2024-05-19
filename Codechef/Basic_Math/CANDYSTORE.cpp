#include<iostream>
int main(void){
	int t;
	std::cin>>t;
	while(t--){
		int x,y,earn=0;
		std::cin>>x>>y;
		earn = (y>x) ? earn+=x+((y-x)*2):earn+=y;
		std::cout<<earn<<"\n";
	}
}