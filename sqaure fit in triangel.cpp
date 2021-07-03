#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(void){
	int n;
	int a;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		
		a/=2;
		cout<<(a*(a-1))/2<<"\n";
	} 
}
