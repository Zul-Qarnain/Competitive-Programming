#include<iostream>
using namespace std;
int main(void){
	int t;
	cin>>t;
	while(t--){
		int n =0;
		int count =0;
		cin>>n;
		int arr[2][n];
		for(int i=0;i<n;i++){
			cin>>arr[0][i];
		}for(int j=0;j<n;j++){
			cin>>arr[1][j];
		}
		while(n--){
			if((arr[0][n]*2>=arr[1][n])&&(arr[1][n]*2>=arr[0][n])){
				count+=1;
			}
		}
		cout<<count<<"\n";
	}}
