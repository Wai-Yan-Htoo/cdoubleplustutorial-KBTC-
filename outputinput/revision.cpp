#include<iostream>
using namespace std;
//return datatype
//int float char string bool

//no return  void 
int addition(){
	int a=10,b=10;	
	return a+b;
}

void substraction(){
	int a=10,b=5;
	cout<<a-b;
}

int main(){//entry
	int number = addition();
	cout<<"number = "<<number<<endl;
	substraction();
	
}

