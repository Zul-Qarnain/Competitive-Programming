#include<iostream>
#include<string>
using namespace std;

bool isVowel(char ch){
	std::string vowels = "aeiou";
	return vowels.find(ch) != std::string::npos;
}

int main(void){
	int t;
	cin>>t;
	while(t--){
		std::string S;
		int N,count = 0,maxconsunant=0;
		cin>>N>>S;
		for(int i = 0;i<N;i++){
			if(isVowel(S[i])){
				count=0;
			}else{
				count ++;
				maxconsunant = max(maxconsunant,count);
			}
		}
		if(maxconsunant>=4){
			cout<<"NO\n";
		}else{
			cout<<"YES\n";
		}
	}
}
// 1 hour
