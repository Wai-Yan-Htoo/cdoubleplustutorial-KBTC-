#include<iostream>

using namespace std;

int main(){
//S=(R1+R2)/2
//R2= -R1 +S*2   11   30-11=19  
	/*
	int r2,r1,s;
	cin>>r1>>s;
	r2=s*2-r1;
	cout<<r2;
	*/
	
	//single dimensional
	/*int r2[2];
	int i=0; 
	for( ;i<2;i++){
		cin>>r2[i];
	}
	cout<<" r2 = "<<r2[i-1]*2-r2[i-2];
	*/
	//multi dimensional
	     //           0   1   2   3   4
	/*int array[3][5]= {  
				  0	{ 1  ,2  ,3  ,4  ,5 },
				  1	{ 6  ,7  ,8  ,9  ,10 },
				  2	{ 100,200,800,900,1000 }
					};
	*/
	int array[3][5]= {  
	
				  	{ 1  ,2  ,3  ,4  ,5 },
				  	{ 6  ,7  ,8  ,9  ,10 },
				  	{ 100,200,800,900,1000 }
				  	
					};
					
	//cout<<array[1][4]; @gmail.com
	int a=1234567;

	string gmail[10]={"@","g","m","a","i","l",".","c","o","m"};
	//               0123456789
	string usermail="yellowflash@gmail.com";//sequence of character
	//cout<<usermail.length()<<endl;
	//a=2  l=4 o=2 m=2
	//          3<21
	int i=0;
	int count=0;
	for(  ;i<usermail.length();i++){
		//0
		//          2=='l'
		if(usermail[i]=='l'){
			count+=1;
		}
		
	}
	cout<<" l = "<<count<<endl;
	
	
}
