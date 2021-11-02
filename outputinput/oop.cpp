#include<iostream>
#include <ctime>

using namespace std;
class A{
	public: 
	int age=10;
};
class B: public A{
	public :
		int ages=20;
};
class C:public A{
	public :
		int age1=30;
};
class D:public B{
	
};

class Vendor{
	private:
	string name="router";
	public :
		//encapsulation
		void setname(string name){
			this->name=name;
		}
		string getname(){
			return name;
		}
};

class ISP:public Vendor{
	
};

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

	D d;
	cout<<d.age;
	
	
	
	
	ISP isp;
	isp.setname("mikrotik router");
	
	Vendor v;
	cout<<"router = "<<v.getname()<<endl;
	v.setname("Huawei Router");
	cout<<v.getname()<<endl;
	
	
	
	
	
	//Class object
	//Telenor t;
	//t.mbsetter(10000);
	//cout<<t.mbgetter()<<endl;
	//cout<<t.getgreeting();
	//string name="hello";
	//cout<<name[0];
	 // current date/time based on current system
   time_t now = time(0);

   cout << "Number of sec since January 1,1970 is:: " << now << endl;

   tm *ltm = localtime(&now);

   // print various components of tm structure.
   cout << "Year:" << 1900 + ltm->tm_year<<endl;
   cout << "Month: "<< 1 + ltm->tm_mon<< endl;
   cout << "Day: "<< ltm->tm_mday+1 << endl;
   cout << "Time: "<< 5+ltm->tm_hour << ":";
   cout << 30+ltm->tm_min << ":";
   cout << ltm->tm_sec << endl;
   
}
