#include<iostream>
using namespace std;
int main(void)
{
	int n,a,b,c,d;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b>>c>>d;
		
		if((a<b or b<a) and (c<d or d<c) ){
			cout<<2<<"\n";
		}
		else if ((a<b)and (b<=c or b<=d or c<=b or d<=b)){
		
		cout<<1<<"\n";
	}
		else if ((a<b)and (a<=c or a<=d or c<=a or d<=a)){
		
		cout<<1<<"\n";
	}
	   else if ((b<c)and (b<=a or b<=d or d<=b or a<=b)){
		
		cout<<1<<"\n";
	}
	  else if ((b<c)and (c<=a or c<=d or d<=c or a<=c)){
		
		cout<<1<<"\n";
	}
	  else if ((c<d)and (c<=b or c<=a or a<=c or b<=c)){
		
		cout<<1<<"\n";
	}
	  else if ((c<d)and (d<=a or d<=b or b<=d or a<=d)){
		
		cout<<1<<"\n";
	}
		else if(a=b=c=d) {
			cout<<0<<"\n";
		}
		
	}
}
