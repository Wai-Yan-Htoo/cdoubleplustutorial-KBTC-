#include<iostream>

using namespace std;

int main(){
	//input n case ;
	int n,net;
	cin>>n;
	//n line 
	while(n>0){
		int r,e,c;
		cin>>r>>e>>c;
		
		net = e-c;//0 100 70
		if(net>r){
			cout<<"advertise";
		}
		else if(net==r){
			cout<<"does not matter";	
		}
		else{
			cout<<"do not advertise";
		}
		cout<<endl;
		n-=1;
	}
}
