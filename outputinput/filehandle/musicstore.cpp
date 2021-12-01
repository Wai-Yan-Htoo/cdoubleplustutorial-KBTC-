#include<iostream>
#include<fstream>
using namespace std;

class music_bank{
	
	public : 
		string title;
		bool search(){
		bool d;
		//string title;
		getline(cin,title);
		fstream file("music_store.txt",ios::in);
		string data;
		while(getline(file,data)){
			if(data==title){
				d=true;
			}else{
				d=false;
			}
		}
	return d;
}
void datawrite(){
	fstream file("music_store.txt",ios::out | ios::app );
	//string title;
	int a=0;
	while(a==0){
		cout<<"enter music title : ";
		getline(cin,title);
		file<<endl<<title;
		cout<<"1. exit or 0. continue";
		cin>>a;
		cin.ignore();
	}
}
};

/*
bool search(){
	bool d;
	string name;
	getline(cin,name);
	fstream file("music_store.txt",ios::in);
	string data;
	while(getline(file,data)){
		if(data==name){
			d=true;
		}else{
			d=false;
		}
	}
	return d;
}
*/

/*
void datawrite(){
	fstream file("music_store.txt",ios::out | ios::app );
	string title;
	int a=0;
	while(a==0){
		cout<<"enter music title : ";
		getline(cin,title);
		file<<endl<<title;
		cout<<"1. exit or 0. continue";
		cin>>a;
		cin.ignore();
	}
}
*/

int main(){
	music_bank mb;
	string opt;
	cout<<"choose option 1. fill song\n2. search song : ";
	cin>>opt;	
	cin.ignore();
	if(opt=="1"){
		mb.datawrite();
	}
	else{
		if(mb.search()==true){
			cout<<"Music in server.";
		}
		else{
			cout<<"no data";
		}
	}
	main();
}
