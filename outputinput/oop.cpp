#include<iostream>
using namespace std;
//oop
	/*4 pillars  
	
	1. encapsulation 2. inheritance 
	3. polymorphism  4. data abstraction
	
	*/
	
 //default rules Private
 
class Telenor{
	//member
	private : 
	
	int megabyte=1000;
	string greeting(){
		return "hello";
	}
	
	public:
		//encapsulation
		void mbsetter(int megabyte){
		   	this->megabyte=megabyte;
		}
		
		int mbgetter(){
			return megabyte;
		}
		string getgreeting(){
			return greeting();
		}
		
	
};

int main(){
	//Class object
	Telenor t;
	t.mbsetter(10000);
	cout<<t.mbgetter()<<endl;
	cout<<t.getgreeting();
	
}
