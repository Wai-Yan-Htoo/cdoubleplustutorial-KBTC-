#include<iostream>
#include<math.h>
#include <sstream>
using namespace std;
int main(){
//armstrong number
	
	int dec;
	while(true){
	
	cout<<"enter 3 number : ";
	cin>>dec;
	int f,s,t;
		
		t=dec%10;//   459%10= 9
		s=(dec/10)%10;//459/10=45
		f=dec/100;
		
		int armstrong = pow(f,3)+pow(s,3)+pow(t,3);
		if(dec==armstrong){
			cout<<dec<<" is armstrong number."<<endl;
		}
		else{
			cout<<dec<<" is not armstrong number."<<endl;
		}
	
	
	}
}
