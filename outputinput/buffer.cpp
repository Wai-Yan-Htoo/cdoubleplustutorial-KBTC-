#include<iostream>
using namespace std;
int main(){
	
	string s1,s2;
	int times,a=0;
	cin>>times;
	
	while(a<times){
		cin>>s1;
		cin>>s2;
		if(s1.length()==s2.length()){
		
		cout<<s1<<endl;
		cout<<s2<<endl;
		for(int i=0;i<s1.length();i++){
			if(s1[i]==s2[i]){
				cout<<".";
			}else{
				cout<<"*";
			}
		}
	}else{
		//cout<<"Len is different"<<endl;
		main();
	}
		cout<<endl;
		a++;
	}
	
}
