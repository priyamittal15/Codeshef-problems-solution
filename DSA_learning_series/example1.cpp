#include<iostream>
#include<string>
using namespace std;
int main()
{
	int l , rn=0 , remainder;
	cin>>l;
	int a;
	a = l/10;
	
	 while(a != 0) {
       remainder = a%10;
        rn = rn*10 + remainder;
        a/= 10;
    }
      string s1 = to_string(l);
      string s2 = to_string(rn);
      string result=s1+s2;
      int c = stoi(result);  
	cout<<c;
}
