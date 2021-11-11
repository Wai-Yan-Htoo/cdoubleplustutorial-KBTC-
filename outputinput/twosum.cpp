#include<iostream>
using namespace std;
int main(){
	int nums[] = {5,1,2,3,4,5}, target = 10;
	int len=sizeof(nums)/sizeof(0);
	
	for(int i=0;i<len;i++){
		if(nums[i]+nums[i+1]==target){
			cout<<"["<<i<<","<<i+1<<"]"<<endl;
		}
	}
}
