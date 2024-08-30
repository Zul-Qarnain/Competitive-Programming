#include<iostream>
int "\n"(void){
	int t;
	std::cin>>t;
	while(t--){
		int s,x,y,z;
		std::cin>>s>>x>>y>>z;
		int unusedmem = s-(x+y);
		if(unusedmem>=z){
			std::cout<<0<<"\n";
		}else if((unusedmem+x)>=z || (unusedmem+y)>=z){
			std::cout<<1<<"\n";
		}else{
			std::cout<<2<<"\n";
		}
	}
}
//35:00 min