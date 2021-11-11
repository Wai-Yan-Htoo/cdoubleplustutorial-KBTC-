#include<iostream>
#include<fstream>
#include<windows.h>
using namespace std;

bool lowercase(string pwd){
	for(int i=0;i<pwd.length();i++){
		if(islower( pwd[i] ))  {
			cout<<"lower case";
			return true;
		}
	}
}

bool uppercase(string pwd){
	for(int i=0;i<pwd.length();i++){
		if(isupper(pwd[i])){
			return true;
		}
	}
	
}

bool alpha(string pwd){
	for(int i=0;i<pwd.length();i++){
		if(isalpha(pwd[i])){
			return true;
		}
	}
	
}

bool digit(string pwd){
	for(int i=0;i<pwd.length();i++){
		if(isdigit(pwd[i])){
			return true;
		}
	}
	
}

bool len_spec(string pwd){
	char spec[]={'!','@','#','$','&'};
	for(int j=0;j<5;j++){
		for(int i=0;i<pwd.length();i++){
			if(pwd[i]==spec[j] && pwd.length()>=8){
				cout<<"long password"<<endl;
				cout<<" special character = "<<pwd[i]<<endl;
				return true;
		}
	}
}
}

bool check_name(string name){
	
	fstream ifile(name.c_str());
	if(!ifile){
		return true;	
	}else{
		return false;
	}
}

void user_registration(){
	//user registration
	string name,pwd;
	ofstream file;
	int a=0;
	while(a==0){
		
		cout<<"enter name : ";
		getline(cin,name);
		if(check_name(name)==true){
			file.open(name.c_str(),ios::out);
			int a1=0;	
			while(a1==0){
				cout<<"enter password : ";
				cin>>pwd;
				if(lowercase(pwd)==true && uppercase(pwd)==true && alpha(pwd)==true && digit(pwd)==true && len_spec(pwd)==true){
					cout<<"strong password";
					a1=1;
				}else{
					a1=0;
				}
	
			}	
			//string sequence of char  c_str()
			file<<pwd;
			a=1;
			file.close();
		}else{
			cout<<"Already exit"<<endl;
		}		
	}
	
}

void login(){
	
	string name;
	cout<<"enter name : ";
	getline(cin,name);
	ifstream file;
	string data;
	file.open(name.c_str());
	while(getline(file,data)){
	}
	
	string password;
	int a=1;
	
	for(int i=1;a==1;){
		cout<<"enter password : ";
		cin>>password;
		if(password==data){
			cout<<"login success";
			a=0;
		}
		else{
			cout<<"Login fail"<<endl;
		
			if(i==5){
				i=1;
				Sleep(30000);
			}
			i++;
		}
		
	
	}
	
}


int main(){
	string choose;
	cout<<"1. Registration"<<endl;
	cout<<"2. Login in system"<<endl;
	cout<<"choose any option : ";
	cin>>choose;
	cin.ignore();
	if(choose=="1"){
		user_registration();	
	}
	else{
		login();	
	}
	
	
}
