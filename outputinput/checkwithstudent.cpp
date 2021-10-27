#include<iostream>
using namespace std;

bool lowercase(string pwd){
	for(int i=0;i<pwd.length();i++){
		if(islower( pwd[i] ))  {
			cout<<"lower case";
			return true;
		}
	}
}

bool uppercase(string pwd){
	for(int i=0;i<pwd.length();i++){
		if(isupper(pwd[i])){
			return true;
		}
	}
	
}

bool alpha(string pwd){
	for(int i=0;i<pwd.length();i++){
		if(isalpha(pwd[i])){
			return true;
		}
	}
	
}

bool digit(string pwd){
	for(int i=0;i<pwd.length();i++){
		if(isdigit(pwd[i])){
			return true;
		}
	}
	
}

bool len_spec(string pwd){
	char spec[]={'!','@','#','$','&'};
	for(int j=0;j<5;j++){
		for(int i=0;i<pwd.length();i++){
			if(pwd[i]==spec[j] && pwd.length()>=8){
				cout<<"long password"<<endl;
				cout<<" special character = "<<pwd[i]<<endl;
				return true;
		}
	}
}
}

int main(){
	//login(sign in ) register(sign up)
	string pwd;
	while(true){
	cout<<"enter password : ";
	cin>>pwd;
	if(lowercase(pwd)==true && uppercase(pwd)==true && alpha(pwd)==true && digit(pwd)==true && len_spec(pwd)==true){
		cout<<"strong password";
	}
	
	}
}
	

