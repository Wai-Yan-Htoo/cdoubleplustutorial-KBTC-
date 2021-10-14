#include<iostream>
using namespace std;

int addition(int a,int b){
	cout<<"a = "<<a<<" b= "<<b<<endl;
	int c;
	c=a+b;
	return c;
}

void title(){
	string no;
	string mgmg_card="123456",card_no;
	float price;
	
	cout<<"========  ========  ====== ======  =======  ======="<<endl;
	cout<<"||        ||    ||  ||     ||      ||       ||"<<endl;
	cout<<"||        ||    ||  ||===  ||===   ||====   ||===="<<endl;
	cout<<"||        ||    ||  ||     ||      ||       ||"<<endl;
	cout<<"========  ========  ||     ||      =======  ======="<<endl;
	cout<<"--------MENU--------"<<endl;
	cout<<"    Name            Price "<<endl;
	cout<<"1. Espresso         1000Ks"<<endl;
	cout<<"2. Flat White       1500Ks"<<endl;
	cout<<"3. Coffee Latte     2000Ks"<<endl;
	cout<<"4. Americano        3000Ks"<<endl;
	cout<<"5. Cappuccino       4000Ks"<<endl;
	bool menu_no=true;
	while(menu_no){
	
	cout<<"choose your drink : ";
	cin>>no;
	
	if(no=="1"){
		price=1000.0;
		menu_no=false;
	}else if(no=="2"){
		price=1500.0;
		menu_no=false;
	}
	else if(no=="3"){
		price=2000.0;
		menu_no=false;
	}
	else if(no=="4"){
		price=3000.0;
		menu_no=false;
	}else if(no=="5"){
		price=4000.0;
		menu_no=false;
	}
	else{
		cout<<"your order is not valid."<<endl;
	}
}
	cout<<"1. cash or 2. card"<<endl;
	
	string bill;
	float account=100000.0;
	cin>>bill;
	if(bill=="2"){
		if(account<price){
			cout<<"you have not enough.";
		}else{
			bool check_no=true;
			while(check_no){
				cout<<"enter card no";
				cin>>card_no;
				if(card_no==mgmg_card){
					account-=price;
					cout<<" ammount = "<<account<<endl;
					check_no=false;
				}else{
					cout<<"your card is not valid."<<endl;
				}
			}
		}
	}else{
		cout<<"Please give to staff.";
	}
}

int main(){
	title();
}


