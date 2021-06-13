#include<iostream>
using namespace std;
int main()
{
	int n,a;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
   	int count=0; 
		while(a>0)
		{
		int r=a%10;
		if(r==4){
			count++;
			}
		a=a/10;
	}
	cout<<count<<"\n";
	}
}
