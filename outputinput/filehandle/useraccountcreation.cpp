#include<iostream>
#include<fstream>

using namespace std;

bool user_login(string name){
	bool check;
	fstream file;
	file.open(name.c_str(),ios::in);//mode append , out, in ,
	if(!file){
		check=true;
	}
	else{
		check=false;
	}
	return check;
}

void user_reg(){
		//file handling
	fstream file;
	//user reg
	int a=0;
	while(a==0){
	
	string name,password;
	cout<<"enter name : ";
	
	getline(cin,name);
	
	
	
	if(user_login(name)==true){
		cout<<"enter password : ";
		cin>>password;
		file.open(name.c_str(),ios::out);
		file<<password;
		cout<<"user registration successful"<<endl;
		a=1;
	}
	else{
		cout<<"User already exist"<<endl;
	}
}
	
}

int main(){
	//user_reg();
	fstream file;
	file.open("GNG.txt",ios::in);
	char ch;
	while(!file.eof()){
		file.get(ch);
		cout<<ch;
	}
	file.close();
	
}
