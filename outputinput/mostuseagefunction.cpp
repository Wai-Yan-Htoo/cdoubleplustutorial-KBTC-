#include<iostream>
#include<iomanip>
#include<windows.h>

using namespace std;
int main(){
	int j=100;
	for(int i=0;i<=1000;i++){
		cout<<setw(4)<<i<<endl;
		Sleep(1000);
		if(i==j){
			system("pause");
			j+=100;
		}
	}
}
