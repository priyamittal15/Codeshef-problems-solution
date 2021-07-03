#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(void){
	int n;
	double a,b;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		if(a<1000){
			cout<<setprecision(6)<<fixed<<a*b<<"\n";
			
		}
		else{
			cout<<setprecision(6)<<fixed<<a*b*0.90<<"\n";
		}
	} 
}
