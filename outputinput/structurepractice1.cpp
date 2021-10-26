#include<iostream>
using namespace std;
//user defined data type

//string int float char...........
struct coconut{
	string name="uncle";
	string dname="khaing";
	float bank_account=1000000;
	
	int bank_data(){
		return 10000;
	}
//	return name;
//	return dname;
	
};


int main(){
	coconut ct;
	cout<<ct.name<<ct.dname<<ct.bank_account<<ct.bank_data();
}
