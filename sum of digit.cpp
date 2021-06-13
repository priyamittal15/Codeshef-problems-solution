#include<iostream>
using namespace std;

int main(){
	int n,k;

	cin>>n;
	for(int i=0;i<n;i++){
		cin>>k;
		int sum=0;
		while(k>0){
			sum+=k%10;
			k/=10;
			
		}
    cout<<sum<<"\n";
	}
	
 return 0;
	
}
