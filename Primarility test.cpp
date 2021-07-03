#include<iostream>
using namespace std;
int main(void)
{
	int n,a;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		int f=0;
		for(int i=2;i<=a;i++){
			if(a%i==0){
				f++;
			}
		}
		if(f==1){
			cout<<"Yes"<<"\n";
		}
		else{
			cout<<"No"<<"\n";
		}
	}
}
