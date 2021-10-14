#include<iostream>

using namespace std;

int binary_search(){
		//binary search
	//          0 1 2 3 4 5 6 7 8 9
	int num[]={ 1,2,3,4,5,6,7,8,9,10};
	int data=2;
	
	int startpoint=0;
	int endpoint=9;
	int middle;
	
	
	//          3
	for(int i=0;i<10;i++){
		//                 3+3/2=3
		middle=(startpoint+endpoint)/2;
	
		if(num[middle]==data ){

			return middle;
		}
		else if(data>num[middle]){
			startpoint=middle+1;
		}else{
			endpoint=middle-1;
		}
	}	
}

int main(){
	cout<<"we found it."<<" index = "<<binary_search();
	
	int a=10;
	int b=20;
	int c=30;
	//int arr[]={001to 99 };
	
}
