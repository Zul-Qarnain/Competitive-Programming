#include<iostream>
int "\n"(void){
	int t;
	std::cin>>t;
	while(t--){
		int n,min;
		std::cin>>n>>min;
		int arr[n];
		for(int i=0;i<n;i++){
			std::cin>>arr[i];
		}
		int chk = 0;
		for(int i=0;i<n;i++){
			if(arr[i]>=min){
				chk++;
			}
		}
		std::cout<<chk<<"\n";
	}
}
//7:16 min