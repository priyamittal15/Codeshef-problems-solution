#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	      while(t--)
	      {
	          string s;
	          cin>>s;
	          int l,m,i,j;
	       l=s.size();
	       if(l%2==0)
	       m=l/2;
	       else
	       m=(l+1)/2;
	       for( i=0;i<m;i++)
	       {
	           for(j=m;j<l;j++)
	           {
	               if(s[i]==s[j])
	               {
	                   s[j]='0';
	                   break;
	               }
	           }
	       }
	       int c=0;
	       for(i=m;i<l;i++)
	       {
	           if(s[i]!='0')
	           {
	               c++;
	           }}
	           if(c==0)
	           cout<<"YES"<<endl;
	           else
	           cout<<"NO"<<endl;
	           
	       
	          }
	      }
