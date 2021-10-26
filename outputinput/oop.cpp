#include<iostream>
using namespace std;
//oop
	/*4 pillars  
	
	1. encapsulation 2. inheritance 
	3. polymorphism  4. data abstraction
	
	*/
	
 //default rules Private
 
class A{
	//member
	public : 
	int a=10;
	void greeting(){
		cout<<"Public park";
	}	
};


int main(){
	//Class object
	A a;
	a.greeting();
	cout<<a.a;
}
