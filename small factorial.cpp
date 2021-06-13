#include<iostream>
#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;
int main()
{
	int n,a;
	cpp_int r;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		r=1;
		while(a>0){
			r=r*a;
			a--;
		}
		cout<<r<<"\n";
	}
	return 0;
}
