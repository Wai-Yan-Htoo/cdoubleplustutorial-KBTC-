#include<iostream>
#include<stdlib.h>

using namespace std;
int main(){
	string current_password,register_password="fedora123";
	string current_name,register_name="wai yan htoo";
	cout<<"User Name : ";
	getline(cin,current_name);//getline(,)
	cout<<"Password : ";
	cin>>current_password;
	if(register_name==current_name && register_password==current_password){
		cout<<"it is your account.";
	}
	else{
		cout<<"This account is not approve."<<endl;
	}
	cout<<"         create new account"<<endl;
	cout<<"enter name : ";
	cin>>register_name;
	cout<<"enter password : ";
	cin>>register_password;
	cin.ignore();
	system("cls");
	cout<<"------Login--------"<<endl;
	cout<<"User Name : ";
	getline(cin,current_name);//getline(,)
	cout<<"Password : ";
	cin>>current_password;
	
	if(register_name==current_name && register_password==current_password){
		cout<<"it is your account.";
	}
	else{
		cout<<"This account is not approve.";
	}
	
}
