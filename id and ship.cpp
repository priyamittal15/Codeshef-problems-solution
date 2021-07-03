#include<iostream>
using namespace std;
int main(void)
{
	int n;
	char a;
	cin>>n;
	 for(int i=0;i<n;i++){
	 	cin>>a;
		if(a =='b' or a=='B'){
			cout<<"Battleship"<<"\n";
		}
		else if(a == 'c' or a=='C'){
			cout<<"Cruiser"<<"\n";
		}
		else if(a == 'd' or a=='D'){
			cout<<"Destroyer"<<"\n";
		}
		else if(a == 'f' or a=='F'){
			cout<<"Frigate"<<"\n";
		}
		
		
	}
	
}
