#include<iostream>
using namespace std;
int main()
{
	int n,a,d;
	cin>>n;
	for(int i=0;i<n;i++){
	
		cin>>a;
		int num=a;
		int rev=0;
		while(num!=0){
		
			d=num%10;
			rev=(rev*10)+d;
			num=num/10;
		}
		if(a==rev){
			cout<<"wins"<<"\n";
			}
			else{
				cout<<"loses"<<"\n";
			}
	 
	}
	return 0;
}

