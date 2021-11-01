#include<iostream>
using namespace std;
int main(){
	
	string choice;
	string name,barcode,search_barcode;
	int id=1;
	
	while(true){	
		cout<<"1. Add Product"<<endl;
		cout<<"2. Search "<<endl;
	
	//cout<<"id = "<<id;
		float price;
		cin>>choice;
		if(choice=="1"){
			cout<<"Product ID : "<<id<<endl;
			cout<<"Product Name : ";
			cin>>name;
			cout<<"Product Price : ";
			cin>>price;
			cout<<"Barcode : ";
			cin>>barcode;
			id++;
		}else if(choice=="2"){
			cout<<"Barcode : ";
			cin>>search_barcode;
			if(search_barcode==barcode){
				cout<<"ID : "<<id<<endl;
				cout<<"Name : "<<name<<endl;
				cout<<"Price : "<<price<<endl;
			}else{
				cout<<"non product."<<endl;
			}
		}
	}
	
}
