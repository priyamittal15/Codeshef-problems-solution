#include<iostream>
using namespace std;
int main(void)
{
	int n,sum=0;
	cin>>n;
	for(int i=0;i<n;i++){
		int x,d,h;
		cin>>x>>d>>h;
		int a[x];
		for(int i=0;i<x;i++){

			cin>>a[i];   
			if(a[i]!=0){
				sum+=a[i];
			}
			else{
				sum=sum-d;
			}
		}
		if(sum<h or sum==h){
				cout<<"NO"<<"\n";
			}
			else{
				cout<<"YES"<<"\n";
			}
	}
}
