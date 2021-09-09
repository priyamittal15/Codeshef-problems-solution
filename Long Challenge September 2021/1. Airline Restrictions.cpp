#include<iostream>
using namespace std;
int main(void)
{
	int n;
	cin>>n;
	int a,b,c,d,e;
	for(int i=0;i<n;i++){
		cin>>a>>b>>c>>d>>e;
		if ((a+b)<=d and c<=e){
			cout<<"YES";
			
		}
		else if ((b+c)<=d and a<=e){
			cout<<"YES";
		}
		else if ((a+c)<=d and b<=e){
			cout<<"YES";
		}
		else{
			cout<<"NO";
		}
		
		
	}
}
