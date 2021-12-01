#include<iostream>
using namespace std;

void function(){
	//with data type
	cout<<"I am function of c++"<<endl;
}

class A{
	public:
	//constructor like a function
	//member   obj 
	
	A(){
		cout<<"I am constructor of c++"<<endl;
		//no data type
		//this is constructor
	}
	
	A(string p){
		cout<<"1 parameter constructor"<<endl;
	}
	
	A(string p1,string p2){
		cout<<"2 parameter constructor"<<endl;
	}
	
	~A(){
		cout<<"I am destructor of c++"<<endl;
	}
};


int main(){
	//function   vs  constructor
	//  call            no call
	//  no obj          build obj
	A a,a1("hello"),a2("hello","world");
	function();
}
