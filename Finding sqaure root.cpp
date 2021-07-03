#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
	int n,a;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		int r=0;
		r=round(sqrt(a));
		cout<<r<<"\n";
	}
	return 0;
}

