#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	int n;
	cin>>n;
	while(n--){
	 int p,count;
	 cin>>p;
	
   int i,j,k;
   for(int i=1;i<p+1;i++){
   	for(int j=1;j<p+1;j++){
   		for(int k=1;k<p+1;k++){
   			//cout<<i<<" "<<j<<" "<<k<<"\n";
   			 if(i%j==k and j%k==0){
   			 	count++;
   			 	
				}
		   }
	   }
   }
   cout<<count;	
}
}
