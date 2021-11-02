#include<iostream>
using namespace std;

class A{
	public:
	A(){
		cout<<"hello"<<endl;
	}
	//constructor
	A(string name){
		cout<<name<<endl;
	}
	
	A(string name,int age){
		cout<<name<<age<<endl;
	}
	A(string name,int age,float salary){
		cout<<name<<age<<salary<<endl;
	}
	
	~A(){//tilde
		int count=0;
		count++;
		cout<<count<<"destroy"<<endl;
	}
	
};


void func(){
	cout<<"hello";
}

int main(){
	A a3,a("gee gee"),a1("dear dear",20),a2("golen",23,400000);
	
	
}
//3
//32 16 8 4 2 1
//0  0  0 0 1 1




