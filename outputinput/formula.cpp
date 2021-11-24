#include<iostream>
using namespace std;

void cycle(){
	//Find area of cycle?
	float pi=3.142,r=12;
	float area=pi*(r*r);
	cout<<area<<endl;
}

void triangle(){
	float h=10,b=15;
	float area=h*b/2;
	cout<<area<<endl;
}

void percent(){
	//bluetooth 11.11%
	float bt_15=25000;
	float discount;
	cout<<"enter discount : ";
	cin>>discount;
	float discount_amount=bt_15*discount/100;
	cout<<discount_amount<<endl;
}

//set A={1,2} and B={1,2,3}
//A belong to B
//B Contains A
void set(){
	string show;
	int A[]={1,2},B[]={1,2,3};
	for(int i=0;i<2;i++){//        1<2
		for(int j=0;j<3;j++){   // 1<3
			if(A[i]==B[j]){//   2==2    //equal
				show="A belong to B";
				break;
			}else{
				show="A not belong to B";
			}
		}
	}
	cout<<show<<endl;
}


int main(){
		int t,cal;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>cal;
		if(cal%400==0){
		    cout<<cal/400;
		}
		else{
		    cout<<cal/400+1;
		}
	}
}


//2021 - jan 1 born  2022 - jan2  (1year BD)
