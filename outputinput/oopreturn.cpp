#include<iostream>
using namespace std;

class Person{//class
//oop feature (4) 1. encapsulation
	private:
		//encapsulation
		string name;
		float mb=1000.0;
	
	public:
		string nrc;
		//encapsultion
		void sname(string name){
			this->name=name;
		}
		string gname(){
			return name;
		}
		
		void smb(float mb){
			this->mb=mb;
		}
		
		float gmb(){
			return mb;
		}
	protected:
		
};

class P:public Person{
	public: 
		float getmb(){
			return gmb();
		}
};

int main(){
	//class object
	
	/*Person  p;
	int user;
	cin>>user;

	if(user==1000){
		cout<<p.gmb();
	}
	else{
		cout<<"check your balance.";
	}*/
	//p.sname("I am a person");
	//cout<<p.gname();
	
	P p1;
	cout<<p1.getmb();
}
