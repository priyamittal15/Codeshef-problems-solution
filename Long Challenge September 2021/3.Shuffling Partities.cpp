#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	 int n,x;
	 int l;
	 cin>>n;
	 while(n--){
	 	cin>>l;
	 	int even=0,odd=0;
	 	for(int i=0;i<l;i++){
	 		cin>>x;
	 		if(x%2==0){
	 			even+=1;
			 }
			 else{
			 	odd+=1;
			 }
	 		
		 }
		 cout<<min(even,(l+1)/2)+min(odd,l/2)<<"\n";
	 }
}
