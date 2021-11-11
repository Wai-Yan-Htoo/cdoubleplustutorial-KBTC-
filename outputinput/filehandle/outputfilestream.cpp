#include<iostream>
#include<fstream>
#include<windows.h>


using namespace std;

void user_registration(){
	//user registration
	string name,password;
	
	ifstream ifile;
	
	int a=0;
	while(a==0){
		cout<<"enter name : ";
		getline(cin,name);
		ifile.open(name.c_str());
		if(!ifile){
			ofstream file;
			file.open(name.c_str());
			cout<<"enter password : ";
			cin>>password;
			//string sequence of char  c_str()
			file<<password;
			a=1;
			file.close();
		}else{
			cout<<"user already exit."<<endl;
		}
	}
	
	
	
	ifile.close();
}

void login(){
	//login   first user data = current data
	
	ifstream file("test.txt");
	string data;
	
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
	user_registration();
	//login();
	
	
}
