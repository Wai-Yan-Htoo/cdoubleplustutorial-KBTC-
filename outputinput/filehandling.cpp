//file handling  type of file text binary file

#include<iostream>
#include<fstream>
#include<string>
#include <direct.h>
//ofstream ifstream fstream
using namespace std;
int main(){
string name,email,password;
int id;
	//user registration
	string user="hello";
	
	int a=0;
	while(a<3){	
		cout<<"enter name : ";
		getline(cin,name);
		cout<<"enter password : ";
		getline(cin,password);
		
		ofstream data("ghost.txt");
		data.open(name.c_str());
		data<<password<<endl;
		
		a++;
	}
	cout<<"user registration is success";

}
