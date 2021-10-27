#include<iostream>
using namespace std;

bool lowercase(){
	char lc='c';
	bool data;
	if(islower(lc) && isalpha(lc)){
		data=true;
	}
	else{
		data=false;
	}
	return data;
}

bool uppercase(){
	char uc='C';
	bool data;
	if(isupper(uc) && isalpha(uc)){
		data=true;
	}
	else{
		data=false;
	}
	return data;
}
bool dg(){
	char d='1';
	bool data;
	if(isdigit(d)){
		data=true;
	}
	else{
		data=false;
	}
	return data;
}

bool alphanumber(){
	char an='cc';
	bool data;
	if(isalnum(an)){
		data=true;
	}
	else{
		data=false;
	}
	return data;
}

int main(){
	cout<<lowercase()<<endl;
	cout<<uppercase()<<endl;
	cout<<dg()<<endl;
	cout<<alphanumber();
}
