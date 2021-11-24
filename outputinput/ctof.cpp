#include<iostream>
using namespace std;
int main(){
	//F=(C*9/5)+32
	double user_cel,c;
	double f;
	cout<<"enter cel : ";
	cin>>user_cel;
	f=(user_cel*9/5)+32;
	cout<<" Fer = "<<f<<"\370"<<"F"<<endl;
	c=(f-32)*5/9;
	//                    octal
	cout<<" Cel = "<<c<<"\370"<<"C";
	
	
}
