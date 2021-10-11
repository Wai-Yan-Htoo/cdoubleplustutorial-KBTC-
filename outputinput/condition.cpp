#include<iostream>

using namespace std;

int main(){
	//condition
	if( 10<1 ){
		cout<<"10 is greater than 1"<<endl;
	}
	//condition
	if(3%2==0 ){
		cout<<"even";
	}
	else{
		cout<<"odd";
	}
	cout<<endl;
	//nested if 
	string username="hello",name,password="123",pwd;
	cout<<"name : ";
	cin>>name;
	if(username==name){
		cout<<"password : ";
		cin>>pwd;
		if(password==pwd){
			cout<<"home page. ";
		}
		else{
			cout<<"invalid password";
		}
	}
	else{
		cout<<"incorrect name.";
	}
	
}
