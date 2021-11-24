#include<iostream>
#include<fstream>

using namespace std;
int main(){
	//of =cout if 
	//ofstream outputfile("kbtc.txt");
	//outputfile<<"kbtc school of IT department.";
	
	string data;
	ifstream inputfile("kbtc.txt");
	//              (cin,data)
	while(getline(inputfile,data)){
		cout<<data;
	}
	
	
	//normal condition
	cout<<"to console"<<endl;
	//string data;
	cin>>data;
	cout<<data<<endl;
	cin.ignore();
	getline(cin,data);//space with data.
	cout<<data;
}
