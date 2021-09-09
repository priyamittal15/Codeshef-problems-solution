#include<iostream>
using namespace std;
int main(void)
{
	int t;
	cin>>t;
	int n,a,b;
	string s;
	for(int i=0;i<t;i++){
		cin>>n>>a>>b;
		int time=0;
		for(int i=0;i<n;i++){
		  cin>>s;
		  if(s[i]=='0'){
		  	time+=a;
		  }
		  else{
		  	time+=b;
		  }
	}
	cout<<time<<"\n";
	
	
}

}
			
	
