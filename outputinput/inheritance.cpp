#include<iostream>
#include<windows.h>

using namespace std;
//single inheritance
class Parent{
	private:
		int area=15;
	public:
		int x=10;
		int y=10;
		int point=0;
};

class Parent_2{
	public:
		string p="p2";
};
//multiple inheritance
class Child : public Parent ,public Parent_2 {
	public:
		string notice="hello I am child";
};

class GrandSon : public Child{
	public:
		int z=9;
};

class Register{
	private:
		string name="Peter";
		int age=19,weight=120;
	public:
		string getname(){
			return name;
		}
		int getage(){
			return  age;
		}
		int getweight(){
			return weight;
		}
	/*	void reg(){
			
			cout<<"enter name ";
			cin>>name;
			cout<<"enter age ";
			cin>>age;
			cout<<"enter weight ";
			cin>>weight;
			cout<<"success registration ";
		}*/
};

class Login :public Register{
	public:
		string name;
		int age;
		int weight;
		int count=0;
		void log(){
			bool check=true;
			while(check){
			
			cout<<"enter name ";
			cin>>name;
			cout<<"enter age ";
			cin>>age;
			cout<<"enter weight ";
			cin>>weight;
			Register r;
			if(r.getname()==name && r.getage()==age && r.getweight()==weight){
				cout<<"login success";
				check=false;
			}
			else{
				count+=1;
				cout<<"login fail"<<endl;
			
				if(count==2){
					cout<<"Wait 10 sec"<<endl;
					Sleep(10000);
					count=0;
					system("pause");
				}
				
			}
		}
		}
		
};

int main(){
	Register r;
	Login l;
	cout<<"1. Register "<<endl;
	cout<<"2. Login    "<<endl;
	string reg_log;
	cin>>reg_log;
	if(reg_log=="1"){
		//register
	/*	r.reg();
		int a=0;
		while(a==0){
			l.log();
			if(r.name==l.name && r.age==l.age && r.weight==l.weight){
				cout<<"success login"<<endl;
				a=1;
			}else{
				cout<<"login fail";
			}
		}*/
	}
	else{
		//login
		l.log();
		
	}
}
