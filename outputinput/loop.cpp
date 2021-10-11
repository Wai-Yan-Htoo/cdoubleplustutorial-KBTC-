#include<iostream>
using namespace std;
int main(){
	//do while 
	int i=0;
	do{
		cout<<" i = "<<i<<endl;
		i++;
	}while(i<10);
	
	
	
	
	
	//for loop
	/*int i=0;
	i+=1;
	cout<<" i = "<<i<<endl;*/
	//       0  10<=10
	for(int i=0;i>=10;i+=1){//  i=i+1   10
		//      i =   9
		cout<<" i = "<<i<<endl;
	
	}
	
	//while loop
	/*int i=0;
	while(i<10){//true
		i+=1;
	}*/
	
	//int float char string  bool  = true / false
	string username="admin",password="fedora",name,pwd;
	bool for_while=true;
	//0 false 1 true
	int check_name=0; //false mean
	
	while(check_name==0){
		cout<<"user name : ";
		cin>>name;
		if(username==name){
			check_name=1;
		}else{
			cout<<"invalid user name"<<endl;
		}
	}
	
	while(for_while){
		cout<<"password : ";
		cin>>pwd;
		if(password==pwd){
			cout<<"home page"<<endl;
			for_while=false;
		}else{
			cout<<"incorrect password"<<endl;
			cout<<"1. forgot password : "<<endl;
			string forgot_password;
			cin>>forgot_password;
			if(forgot_password=="1"){
				cout<<"reassign : ";
				cin>>password;
			}	
		}
	}
	
	
	
	
	
	//while(true){//  true
	/*	cout<<"user name : ";
		cin>>name;
		
		if(username==name){
			while(true){
			
			cout<<"password : ";
			cin>>pwd;
			if(password==pwd){
				cout<<"home page";
			}
			else{
				cout<<"incorrect password"<<endl;
			}
		}
		
		}
		else{
			cout<<"invalid user name"<<endl;
		}*/
	//}
}
