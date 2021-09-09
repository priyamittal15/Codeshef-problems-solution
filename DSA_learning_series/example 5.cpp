#include<iostream>
#include <bits/stdc++.h>
#include<string>
#define ll long long
using namespace std;


int main(void){
	ll n , i , rn=0 , remainder , remainder1=0;
	ll l,r;
	ll a,b,c=0,d=0;
	double res=1;
	cin>>n;
	for (ll j=0; j<n ; j++){
		cin>>l>>r;
// logic for finding l's chefora number.
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
	     c=l;
	 }
     
		
	  for(ll i=l+1; i<=r; i++){
	    ll rn1=0;
	   // double res=1;
	
     
	 // logic for finding chefora's number for upto r's.(10,11) 
	    
	 if(i>9){
	   b=i/10;
	 
	 while(b!= 0) {
       remainder1 = b%10;
       
        rn1 = rn1*10 + remainder1;
        b/= 10;    //// got reversed number
    }
   
      string s3 = to_string(i);
      string s4 = to_string(rn1);
      
      string re=s3+s4;
       d= stoi(re); //palindrome
	}
	 else{
	     d=i;
	 }
	//cout<<d<<"\n";
      
	//	 res*= getpower(c,d);
	    res*=pow(c,d);
	//	cout<<res<<"\n";	 
	}
   
   	cout<<res<<"\n";
}
}

