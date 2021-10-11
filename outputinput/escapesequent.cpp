#include<iostream>

using namespace std;

int main(){
	//input
	float pi;
	cout<<"pi = ";
	cin>>pi;
	cin.ignore();
	string my_name;
	cout<<"my name = ";
	//cin>>my_name;
	getline(cin,my_name);
	char first_character;
	cout<<"first character = ";
	cin>>first_character;
	
	
	long double ld;
	cout<<"long double = "<<sizeof(ld)<<endl;
	//order of precendence  
	cout<<12/4+12-2*(57%10)-20+12/6*7;
	
	int age=30 ;
	//1byte = 8bit 4byte(B)=32bit(b) 
	cout<<sizeof(age)<<endl;
	
	cout<<age;
	cin>>age;
	string name; 
	float bank_account; 
	char nrc;
	cout<<"\ahe\\ \"s m\ty friend."<<endl;
	cout<<"pi = "<<pi<<" I'm "<<my_name<<" first character = "<<first_character;
	
	
}
