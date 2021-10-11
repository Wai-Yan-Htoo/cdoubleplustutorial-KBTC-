#include <iostream>

using namespace std;


int main(){  
	//compile  run
	//write your c++ code
	//variable       1      1.03       ''     " "
	//1. datatype(1. int,2. float,3. char,4. string) 2. variable-name
	string password;
	//operator( = assignment )   value( data )
	string setting_pwd="1.2";

	//variable rules 
	string abcde;
	int num_1;
	float _1num;
	char alpha_1;

	//output
	//       string ( " " )
	cout<<"enter your password : ";//( ; )end of this work
	
	
	//input
	
	cin>>password;//0 default assign
	//cout<<password;
	if (setting_pwd==password){
		cout<<"++++Home Screen++++"<<endl;
		cout<<"+                 +\n";
		cout<<"+                 +"<<endl;
		cout<<"+                 +\n";
		cout<<"+                 +"<<endl;
		cout<<"+                 +\n";
		cout<<"+                 +"<<endl;
		cout<<"+                 +"<<"\n";
		cout<<"+++++++++++++++++++"<<endl;
	}
	else{
		cout<<"incorrect password";
	}
}
//1.variable 2.output 3.input

