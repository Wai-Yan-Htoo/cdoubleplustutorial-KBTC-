#include<iostream>
using namespace std;
int main(){
	int data1,data2,data3,data4;
	int c1,c2,c3,c4,c5;
	for(int i=0;i<5;i++){
		cin>>data1>>data2>>data3>>data4;
		if(i==0){
			c1=data1+data2+data3+data4;
		}else if(i==1){
			c2=data1+data2+data3+data4;
		}else if(i==2){
			c3=data1+data2+data3+data4;
		}else if(i==3){
			c4=data1+data2+data3+data4;
		}else if(i==4){
			c5=data1+data2+data3+data4;
		}
	}
	
	if(c1>c2 && c1>c3 && c1>c4 && c1>c5){
		cout<<1<<" "<<c1;
	}else if(c2>c1 && c2>c3 && c2>c4 && c2>c5){
		cout<<2<<" "<<c2;
	}else if(c3>c2 && c3>c1 && c3>c4 && c3>c5){
		cout<<3<<" "<<c3;
	}else if(c4>c2 && c4>c3 && c4>c1 && c4>c5){
		cout<<4<<" "<<c4;
	}else{
		cout<<5<<" "<<c5;
	}
}
