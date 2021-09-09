#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int n , i , rn=0 , remainder,rn1=0 , remainder1;
	int l,r , res=1;
	int a , b , c,d;
	cin>>n;
	for (int j=0; j<n ; j++){
		cin>>l>>r;
	}
	if(l>9){
	//palindrome formula
	a = l/10;
	
	 while(a != 0) {
       remainder = a%10;
        rn = rn*10 + remainder;
        a/= 10;    //// got reversed number
    }
     string s1 = to_string(l);
      string s2 = to_string(rn);
      string result=s1+s2;
       c = stoi(result); //palindrome
	}
	 else{
	     c==l;
	 }
   
	  
	for(int i=l+1; i<=r; i++){
	 if(r>9){
	//palindrome formula
	b = l/10;
	
	 while(b!= 0) {
       remainder1 = b%10;
        rn1 = rn1*10 + remainder1;
        b/= 10;    //// got reversed number
    }
     string s1 = to_string(r);
      string s2 = to_string(rn1);
      string re=s1+s2;
       d= stoi(re); //palindrome
	}
	 else{
	     d==r;
	 }
   
		 res *= pow(c,i);  // (wrong concept)
		 
		 
	}
	cout<<res;
}
