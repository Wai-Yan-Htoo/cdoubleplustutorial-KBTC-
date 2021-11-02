#include<iostream>
using namespace std;
int main(){
	
	string form;//string sequence of character
	cin>>form;
	for(int i=0;i<form.length();i++){
		if(form[i]==':'	&& form[i+1]==')'  || form[i]==';' && form[i+1]=='-' && form[i+2]==')'){
			cout<<i<<endl;
		}else if(form[i]==':' && form[i+1]=='-' && form[i+2]==')'){
			cout<<i<<endl;
		}
	}
}



