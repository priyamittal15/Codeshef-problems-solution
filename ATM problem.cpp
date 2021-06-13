#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int a;
	float b;
	float w;
	cin>>a;
	cin>>b;
	if(a%5==0 && b>=(float(a)+0.50)) {
	    w=b-(float(a)+0.50);
	    cout<<setprecision(2)<<fixed<<w<<"\n";
	    
	}
	else{
		cout<<setprecision(2)<<fixed<<b<<"\n";
	}
	return 0;
	
}
	

