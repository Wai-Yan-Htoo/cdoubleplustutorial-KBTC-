#include<iostream>
using namespace std;
//function overloading
void hello(){
	cout<<"1";	
}
void hello(int a){
	cout<<"2";
}

void hello(int a,int b){
	cout<<"3";
}
void hello(int a,int b,int c){
	cout<<"4";
}
void hello(int a,int b,int c,int d){
	cout<<"5";
}

class A{
	
};

int main(){
	hello();
	hello(1);
	hello(1,2);
	string c="hello";
	string c1="world";
	cout<<c+c1;//concatenation
	
}



//+ - * / %     operand  operator operand  = operation   integer float string +
//obj + obj;
//



