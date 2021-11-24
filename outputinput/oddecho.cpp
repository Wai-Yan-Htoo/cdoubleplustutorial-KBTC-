#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	
	string data[n]={};
	
	for (int i=0;i<n;i++){
		cin>>data[i];
	}
	//01234
	//12345
	for(int i=0;i<n;i++){
		if(i%2==0){
			cout<<data[i]<<endl;
		}
	}
}
