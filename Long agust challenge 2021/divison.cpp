#include<iostream>
using namespace std;
int main(void)
{
	int n,r;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>r;
		if(r>=2000){
			cout<<1<<"\n";
		}
		else if(r>=1600 and r<2000){
			cout<<2<<"\n";
		}
		else{
			cout<<3<<"\n";
		}
	}
}
