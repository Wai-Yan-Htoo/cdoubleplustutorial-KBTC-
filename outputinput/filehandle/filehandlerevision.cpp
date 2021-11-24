#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;
class A{
	public :
		int a=10,b=5;
};


void my_function(int a,int b){
	int c=a-b;
	cout<<" substract operation : "<<c<<endl;
}
void my_function(int a, int b, int c){
	c=a+b;
	cout<<" adding operation : "<<c<<endl;
}


bool search(){
	bool d=false;
	string name_of_movie;
	stringstream ss;
	cout<<"enter movie title : ";
	getline(cin,name_of_movie);
	
	fstream file("moviestore.txt",ios::in);
	char ch;
	string data;
	while(getline(file,data)){
		cout<<data<<endl;
		if(data==name_of_movie){
		
			d=true;
		}
	}
	return d;
}

/*
1. Jeeper creaper
2. front of the class
3. Legend of sword
4. Lord of the ring
5. Big Friend Giant
6. Pilot
*/

int main(){
	A a;
	cout<<a.a-a.b<<endl;
	cout<<a.a+a.b<<endl;
	
	//ofstream            ifstream file 
	//outputfile cout<<   cin>>
	//my_function(10,2);
	//my_function(10,5,0);
	/*string movie_name;
	fstream file ("moviestore.txt",ios::out | ios::app);
	while(true){
		cout<<"enter movie name : ";
		getline(cin,movie_name);
		file<<movie_name<<endl;
	}
	file.close();*/	
	
	if(search()==true){
		cout<<"movie in store";
	}
	else{
		cout<<"movie not in store";
	}
}
