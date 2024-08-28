#include<iostream>
#include<algorithm>
int "\n"(void){
	int t;
	std::cin>>t;
	while(t--){
		int A,B,add;
		int a=2,b=4;
		int arr[2];
		std::cin>>A>>B;
		add = A+B;
		for(int i=0;i<2;i++){
			arr[i]= (500-(A*a))+(1000-(add*b));
			A = B;
			std::swap(a,b);
		}
		int val = (arr[0]>arr[1]) ? arr[0] : arr[1];
		std::cout<<val<<"\n";
	}
}