#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int n , i , rn=0 , remainder , remainder1=0;
	int l,r ,res=1;
	int a , b=0 , c,d=0;
	cin>>n;
	for (int j=0; j<n ; j++){
		cin>>l>>r;
	
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
     
     
	  
	for(int i=l+1; i<=r; i++){
	    int rn1=0;
	    
	 if(i>9){
	//palindrome formula
	b = i/10;
	 
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
//	 cout<<d<<"\n";
      
		 res*= pow(c,d);  // (wrong concept)
		 
		 
	}
	cout<<res<<"\n";
}
}
