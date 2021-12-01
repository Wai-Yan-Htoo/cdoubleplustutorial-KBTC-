#include<iostream>
using namespace std;

class R{
	public : 
	int length=10,width=20;
	friend void area(R);
};

void area(R r){
	cout<<r.length*r.width;
}

int main(){
	R r1;
	area(r1);
}
