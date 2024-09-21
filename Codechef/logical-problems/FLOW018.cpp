#include<iostream>
using namespace std;
int main(void) {
    int t;
    cin>>t;
    while(t-->0){
    int fact=1,n;
    cin>>n;
    for(int i=1;i<=n;i++){
        fact = fact*i;
    }
    cout<<fact<<"\n";
    }
}
