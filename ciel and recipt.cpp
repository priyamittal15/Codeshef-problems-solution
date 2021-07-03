#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int t =2048,m=0;
	    int p;
	    cin>>p;
	 while(p>0){
	     m+=p/t;   
	     p%=t;
	     t=t/2;
	     
	     
	 }   
	  cout<<m<<endl;  
	}
	return 0;
}
