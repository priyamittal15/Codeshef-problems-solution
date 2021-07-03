#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a,b;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		cin>>b;
		cout<<max(a,b)<<" "<<a+b<<"\n";
	}
	return 0;
}
