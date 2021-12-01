#include<iostream>
using namespace std;
class A{
	public :
		virtual void my_func(){
			cout<<"A function"<<endl;
		}
};

class B:public A{
	public : 
		void my_func(){
			cout<<"B function"<<endl;
		}
};


int main(){
	//function overriding
	A *a;
	B b;
	a=&b;
	a->my_func();
}
