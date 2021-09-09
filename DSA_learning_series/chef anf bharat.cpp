#include<iostream>
int main(void){
	int n , i , rn=0 , remainder;
	int l,r , res;
	int a , b;
	cin>>n;
	for (int j=0; j<n ; j++){
		cin>>l>>r;
	}
	//palindrome formula
	a = l/10;
	
	 while(a != 0) {
       remainder = a%10;
        rn = rn*10 + remainder;
        a/= 10;    //// got reversed number
    }
   
	  
	for(int i>l ; i<=r ; i++){
		  
		 res += l**i;
		 
		 i++;
	}
}
