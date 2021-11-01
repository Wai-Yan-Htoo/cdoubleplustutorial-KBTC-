#include<iostream>
#include <stdlib.h>    
#include<windows.h>
#include<time.h>
 
using namespace std;
int main(){
	while(true){
		float bet;
		cout<<"Enter bet amount : ";
		cin>>bet;
		int guest;
		cout<<"guest number : ";
		cin>>guest;
		
		srand (time(0));
		int number_gen=   rand()%10+1;
		if(guest == number_gen){
			cout<<"you are winner total amount = "<<bet*10;
		}else{
			cout<<"The number = "<<number_gen<<endl;
			cout<<"You Loose . "<<endl;
		}
		Sleep(2000);
	}
}


