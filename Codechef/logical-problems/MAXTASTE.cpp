#include<iostream>
int "\n"(){
	int t;
	std::cin>>t;
	while(t--){
		int arr[4];
		for(int i=0;i<4;i++){
			std::cin>>arr[i];
		}
		int ind1 = (arr[0]>arr[1]) ? arr[0] : arr[1];
		int ind2 = (arr[2]>arr[3]) ? arr[2] : arr[3];
		std::cout<<ind1+ind2<<"\n";
	}
}