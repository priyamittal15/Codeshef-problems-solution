#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n,a,b,c,d,e,f;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b>>c;
		 d=a+b;
		 e=b+c;
		 f=c+a;
		cout<<max(max(d,e),max(e,f))<<"\n";
	}
	return 0;
}
