#include<iostream>
using namespace std;
int main(){
	//stack in a time loop
	int times,host=1;
	cin>>times;
	
	while(host<=times){
		cout<<host<<" Abracadabra"<<endl;
		host+=1;
	}
	
	
	
	int megabyte,month,spend_megabyte;
	cin>>megabyte;
	cin>>month;
	int store=0;
	int total_megabyte=megabyte*month;//30
	while(month>0){
		cin>>spend_megabyte;//462
		store+=spend_megabyte;//12
		month-=1;
	}
	int value=total_megabyte-store+megabyte;
	cout<<value;
	
}
