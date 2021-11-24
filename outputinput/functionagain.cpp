#include<iostream>
using namespace std;

int func_name();//func decleration

int main(){
	cout<<func_name();//function call
}


int func_name(){//func definition
	int a=1,b=10;
	return a+b;
}
