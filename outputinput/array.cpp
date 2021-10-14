#include<iostream>
using namespace std;

int linear_search(){
	//5 3 7 2 8 1
	//             0 1 2 3 4 5
	int r_array[]={5,3,7,2,8,1};
	int data=1;
	int index=6;
	int start=0;
	//        6 < 6
	while (start<index){
		// r_array[  0  ]==10
		if(r_array[start]==data ){
			return data;
			
		}
		else {
			cout<<"no match data"<<endl;
			start+=1;//6
		}
		if(start>5){
			
			cout<<"no data";
		}
		
	}
	
}

int main(){
	
		
	cout<<linear_search()<<endl;
	
	
	//array  datatype arrayname symbol
	//index = 0 1 2 3 4 5 6 7 8=9
	
	int arr[4];//index out of range
	//       0 1 2 3
	int a[]={1,2,3,4};//single array
	int a1=0;
	//     4<4
	while(a1<4){
		//    a[3] 
		cout<<a[a1];
		a1+=1;//4
	}
	
	
	
	
}
//input output
//if if else nested
//loop
//function
 
//array
//struct
//oop 
//file handling
