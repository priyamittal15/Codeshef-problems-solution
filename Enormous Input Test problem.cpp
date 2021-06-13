#include<iostream>
using namespace std;

int main(){
	int n,k;
	int a;
	int count=0;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>a;
		if(a%k==0){
			count++;
		}

	}
	cout<<count;
 return 0;
	
}
