#include<iostream>
using namespace std;

void func(){//argument / parameter 
	
}

int main(){
	//data science
	//average
	//data set [1,2,3,4,5,1000]
	//mean=weak point   median=weak point   mode=weak point
	//mean  data set   [50,60,40,70,4231008000]   50+60+40+70+4231008000  230/4=57  outlier value
	//median   1,2,3,4,5,6   odd n+1/2    even  
	//mode  [50,100,200,50,100]  mode 50,100
	
	
	string name="kyaw kyaw";
	cout<<name.length()<<endl;
	int arr[]={40,50,60,70};
	
	int arrSize = sizeof(arr)/sizeof(arr[0]);
	
	int total=0;
	
	for(int i=0;i<arrSize;i++){
		total+=arr[i];
	}
	int average=total/arrSize;
	cout<<average;	
	
	
	//-------------------------
	
	
	
	
	
}






