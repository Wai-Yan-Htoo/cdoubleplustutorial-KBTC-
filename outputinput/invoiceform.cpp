#include<iostream>
#include<iomanip>
using namespace std;



int main(){
	string uid,name;
	float amount;
	cout<<"user id : ";
	cin>>uid;
	cout<<"user name : ";
	cin>>name;
	cout<<"Amount : ";
	cin>>amount;
	
	
	cout<<setw(30)<<"Invoice / Statement"<<endl;
	cout<<"-------------------------------------------"<<endl<<endl;
	cout<<"User ID"<<setw(10)<<":"<<uid<<endl;
	cout<<"User Name"<<setw(8)<<":"<<name<<endl;
	cout<<"Package"<<setw(10)<<":"<<"Silver - 25 Mbps"<<endl;
	cout<<"Invoice Number"<<setw(3)<<":"<<"123456789"<<endl;
	cout<<"Billin Period"<<setw(4)<<":"<<"20 . 10 . 2021"<<endl;
	cout<<"Issue Date"<<setw(7)<<":"<<"20 . 10 . 2021"<<endl<<endl;
	cout<<"Plan"<<setw(13)<<":"<<endl;
	cout<<"Amount"<<setw(11)<<":"<<amount<<endl;
	cout<<"---------------------------------------------"<<endl;
	cout<<"Total Due"<<setw(8)<<":"<<amount<<endl;
	
	system("pause");
	
}
