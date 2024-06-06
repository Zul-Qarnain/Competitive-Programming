#include<bits/stdc++.h>
int main(void){
	int t;
	std::cin>>t;
	while(t--){
	std::string array;
	int point,carlsen=0,chef=0;
	std::cin>>point;
	std::cin>>array;
	for(int i=0;i<14;i++){
		if(array[i]=='C'){
			carlsen+=2;
		}
		else if(array[i]=='N'){
			chef+=2;
		}else{
			carlsen+=1;
			chef+=1;
		}
	}
	if(carlsen==chef){
		std::cout<<point*55<<"\n";
	}else if(carlsen<chef){
		std::cout<<point*40<<"\n";
	}
	else{
		std::cout<<point*60<<"\n";
	}
	}
}
