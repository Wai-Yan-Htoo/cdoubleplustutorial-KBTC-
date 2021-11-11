#include<iostream>
using namespace std;



bool login(){
	bool data;
	int a=0;
	string e="kbtc@edu.mm",p="12345";
	string email,password;
	while(a==0){
	
	cout<<"enter email : ";
	cin>>email;
	cout<<"enter password : ";
	cin>>password;
	if(email==e && password==p){
		cout<<"Success Login";
		data=true;
		a=1;
	}
	else{
		cout<<"Invalid Login";
		data=false;
		a=0;
	}
}
	return data;
}

int main(){
	for(int i=0;i<4;i++){	
	login();
}
}
