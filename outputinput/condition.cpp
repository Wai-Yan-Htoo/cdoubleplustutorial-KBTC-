#include<iostream>

using namespace std;

int main(){
	//   1    2   3   4
	//30 sep apr jun nov
	//1   2      3   4    5       6      7
	//jan march may july august october december
	//feb
	
	//1. instruction input  9  4 6  11
	//2.                    1  3 5 7 8 10 12
	//3                     2
	
	//switch
	while(true){
	
	int month;
	cin>>month;
	
	if(month==2){
		cout<<"28 / 29"<<endl;
	}
	else if(month==9 || month==4|| month==6 || month==11){
		cout<<"30"<<endl;
	}
	else{
		cout<<"31"<<endl;
	}
	
	
}
	
	/*switch(month){
		case 1: cout<<"31";break;
		case 2: cout<<"28 29";break;
		case 3: cout<<"31";break;
		case 4: cout<<"January 31";break;
		case 5: cout<<"January 31";break;
		case 6: cout<<"January 31";break;
		case 7: cout<<"January 31";break;
		case 8: cout<<"January 31";break;
		case 9: cout<<"January 31";break;
		case 10: cout<<"January 31";break;
		case 11: cout<<"January 31";break;
		case 12: cout<<"January 31";break;
	}*/
	
	
	
	
	
	//switch  () {   case : syntax ; break; }
	switch ('d') {
		case 'a': cout<<"apple";break;
		case 'b': cout<<"bubble tea";break;
		case 'c': cout<<"Marry brown";break;
		default : cout<<"no case.";break;
	}
	int num=4;
	if(num==1){
		cout<<"I am no 1";
	}
	else if(num==2){
		cout<<"nga har lay du ta ya lu";
	}
	else if(num==3){
		cout<<"third party";
	}
	else{
		cout<<"no number";
	}
	
	
	//condition
	if( 10<1 ){
		cout<<"10 is greater than 1"<<endl;
	}
	//condition
	if(3%2==0 ){
		cout<<"even";
	}
	else{
		cout<<"odd";
	}
	cout<<endl;
	//nested if 
	string username="hello",name,password="123",pwd;
	cout<<"name : ";
	cin>>name;
	if(username==name){
		cout<<"password : ";
		cin>>pwd;
		if(password==pwd){
			cout<<"home page. ";
		}
		else{
			cout<<"invalid password";
		}
	}
	else{
		cout<<"incorrect name.";
	}
	
}
