#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	
	int data[n]={};
	
	for (int i=0;i<n;i++){
		cin>>data[i];
	}
	//01234
	//12345
	for(int i=n-1;i>=0;i--){
		cout<<data[i]<<endl;
	}
}
