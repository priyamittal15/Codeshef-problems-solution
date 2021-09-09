#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
int l;
cin>>l;
  for(int i=0;i<l;i++)
  {
  int n,k;
  cin>>n>>k;
  int array[33];
  for(int i=0;i<33;i++){
  	array[i]=0;
  }
  int a[n];
   for(int i=0;i<n;i++){
     cin>>a[i];
	 }
	 
for(int i=0;i<n;i++){
      int x=a[i];
      int j=32;
      while(x>0){
      array[j]=array[j]+x%2;
      j--;
      x=x/2;
      }
  }	
  int c=0;
  for( int j=0;j<33;j++){
      if(array[j]%k==0){
         c=c+array[j]/k;
    }
      else{
        c=c+1+array[j]/k;
      }
}
    cout<<c<<"\n";
  }
} 
  
