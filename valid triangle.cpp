#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a,b,c;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		cin>>b;
		cin>>c;
	   int sum = a+b+c;
		if(sum==180){
			cout<<"YES"<<"\n";
			
		}
		else{
			cout<<"NO"<<"\n";
		}
	}
	return 0;
}
