#include<iostream>
using namespace std;

void check_prime_number(){
	string check_prime;
	while(true){
	
	int num;
	cout<<"enter number : ";
	cin>>num;
	
	//prime   12
	for (int i=2;i<num;i++){
			if(num%i!=0){
				check_prime="prime";
			}
			else{
				check_prime="not prime";
				break;
			}
		}
		cout<<check_prime<<endl;
	}
	
}


int main(){
	check_prime_number();
}
