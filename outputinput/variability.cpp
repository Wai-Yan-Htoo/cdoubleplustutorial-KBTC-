#include<iostream>
#include<cmath>
#include <iomanip>
using namespace std;
int main(){
	//variability
	//Range   Variance   Standard Deviation
	//[50,100,150,200]   range= 200 - 50 =150
	//[13,3,40,12,3,25]
	int data[]={3,3,12,13,25,40};//sorting algorithm
	int n=sizeof(data)/sizeof(0);
	int range=data[5]-data[0];
	cout<<"Range = "<<range<<endl;
	int vleft=0;
	int vright=0;
	for(int i=0;i<n;i++){
		vleft+=data[i]*data[i];
		vright+=data[i];
	}
	vleft/=n;
	vright*=vright;
	vright/=n*n;
	int variance=vleft-vright;
	cout<<"Variance = "<<variance<<endl;
	
	double SD=sqrt(variance);
	cout<<"Standard Deviation = "<<fixed<<setprecision(2)<<SD<<endl;
	/*
	13*13= 169
	3*3=     9
	40*40=1600
	12*12= 144
	3*3=     9
	25*26= 625
	96*96=9216/36=256
	ans    2556/6=426-256=170
	
	*/
	//variance sum(xpow2)/n  -  sum(x)pow2/npow2
	//square root V
	
	
}


//the rain in the spain;  origin length=21
//the rain in spain;                   =18


