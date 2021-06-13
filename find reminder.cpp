#include<iostream>
using namespace std;
int main(){
	int n,k,d;
    cin>>n;
	for(int i=0;i<n;i++){
		
		cin>>k>>d;
		if(k<d){
		cout<<k<<"\n";
	}
	else{
		cout<<k%d<<"\n";
	}
		 }
    return 0;
	
}
