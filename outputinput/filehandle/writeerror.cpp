#include <iostream>
#include <fstream>
#include <sstream>
#include <conio.h>
#include <stdlib.h>
#include <ctime>
#include<windows.h>

using namespace std;

void dashboard();

bool lowercase(string pwd){
	for(int i=0;i<pwd.length();i++){
		if(islower( pwd[i] ))  {
			//cout<<"lower case";
			return true;
		}
	}
}

bool uppercase(string pwd){
	for(int i=0;i<pwd.length();i++){
		if(isupper(pwd[i])){
			return true;
		}
	}
	
}

bool alpha(string pwd){
	for(int i=0;i<pwd.length();i++){
		if(isalpha(pwd[i])){
			return true;
		}
	}
	
}

bool digit(string pwd){
	for(int i=0;i<pwd.length();i++){
		if(isdigit(pwd[i])){
			return true;
		}
	}
	
}

bool len_spec(string pwd){
	char spec[]={'!','@','#','$','&'};
	for(int j=0;j<5;j++){
		for(int i=0;i<pwd.length();i++){
			if(pwd[i]==spec[j] && pwd.length()>=8){
				//cout<<"long password"<<endl;
				//cout<<" special character = "<<pwd[i]<<endl;
				return true;
		}
	}
}
}

bool check_name(string name){
	
	fstream ifile(name.c_str());
	if(!ifile){
		return true;	
	}else{
		return false;
	}
}

void clear(){
	system("cls");
}

void user_registration(){
	
	

	
	//user registration
	string name,pwd;
	ofstream file;
	file.open("bird.txt");
	file<<"I am a bird";
	/*
	int a=0;
	while(a==0){
	//	file.open("bird.txt");
	//	file<<"I am bird";
		
		cout<<"\n\t\tEnter Name : ";
		cin.ignore();
		getline(cin,name);
		
		if(check_name(name)==true){
			//file.open(name.c_str());
			int a1=0;	
			while(a1==0){
				cout<<"\n\t\tEnter Password : ";
				cin>>pwd;
				
				if(lowercase(pwd)==true && uppercase(pwd)==true && alpha(pwd)==true && digit(pwd)==true && len_spec(pwd)==true){
					file<<pwd;
					cout<<"\n\t\tSUCCESSFULLY REGISTERED!!";
					Sleep(2000);
					//clear();
					dashboard();
					a1=1;
				}else{
					cout<<"\n\t\tPASSWORD IS NOT STRONG ENOUGH!";
					a1=0;
				}
	
			}	
			//string sequence of char  c_str()
			//file<<pwd;
			a=1;
			//file.close();
		}else{
			cout<<"\n\t\tALREADY EXISTS!!"<<endl;
		}		
	}
	*/
}

void login(){
	

	
	string name;
	cout<<"\n\t\tEnter Name : ";
	cin.ignore();
	getline(cin,name);
	ifstream file;
	string data;
	file.open(name.c_str());
	while(getline(file,data)){
	}
	
	string password;
	int a=1;
	
	for(int i=1;a==1;){
		cout<<"\n\t\tEnter Password : ";
		cin>>password;
		cin.ignore();
		if(password==data){
			cout<<"\n\t\tLOGIN SUCCESS!!";
			system("cls");
			dashboard();
			a=0;
		}
		else{
			cout<<"Login fail"<<endl;
		
			if(i==5){
				i=1;
				Sleep(3000);
			}
			i++;
		}
		
		
	}
	
}

void dashboard(){
	void addbook();
	void searchbook();
	void booklist();
	void member();
	int i;
		cout<<"\n\t************ LIBRARY MANAGEMENT ************\n";
        cout<<"\n\t\t>>Please Choose One Option:\n";
        cout<<"\n\t\t1. View BookList\n\n\t\t2. Search for a Book\n\n\t\t3. Add Book\n\n\t\t4. About Members\n\n\t\t5. Close Application\n";
        cout<<"\n\t\tEnter your choice : ";
        cin>>i;
        system("cls");
        
       if(i==1){
       	
       		booklist();
       		
	   }
	   else if(i==2){
	   		
	   		searchbook();
	   }
	   else if(i==3){
	   		
	   		addbook();
	  
	   }
	   else if(i==4){
	   	
	   		member();
	  
	   }
	   else if(i==5){
	   	
		   	exit(0);
	   
	   }
	
}
void booklist(){
	
	
	ifstream file("bookinfo.txt");
	
	if(file.is_open()){
		string s;
		cout<<endl<<"\t\tID\tNAME\t\t\tAUTHOR\t\t\tQUANTITY"<<endl;	
		while(getline(file,s)){
				
			cout<<"\t\t"<<s<<endl;
			
		}
		file.close();
	}
	
	int j;
	cout<<"\n\n\t\t1. Back to Main Menu"<<endl;
	cout<<"\t\t2. Close the Program"<<endl;
	cin>>j;
	if(j==1){
		system("cls");
		dashboard();
	}
	else{
		exit(0);
	}
	
}

void searchbook(){
	
	bool d;
	string name;
	
	cout<<"\n\n\t\tEnter Book Name : ";
	cin.ignore();
	getline(cin,name);
	//cout<<name;
	
	fstream file("booklist.txt",ios::in);
	string data;
	
	while(getline(file,data)){
		if(data==name){
			//cout<<data;
			d=true;
		}else{
			//cout<<data;
			d=false;
		}
	}
	
	if(d=true){
		ifstream f("bookinfo.txt");
	
		if(f.is_open()){
			string s;
			cout<<endl<<"\t\tID\tNAME\t\t\tAUTHOR\t\t\tQUANTITY"<<endl;	
			while(getline(f,s)){
				
				cout<<"\t\t"<<s<<endl;
			
			}
			f.close();
		}
		cout<<"\n\n\t\tBook exists.";
	}
	else{
			cout<<"\n\n\t\tBook doesn't exist.";
			}
	
	file.close();
	int j;
	cout<<"\n\n\t\t1. Back to Main Menu"<<endl;
	cout<<"\t\t2. Close the Program"<<endl;
	cin>>j;
	if(j==1){
		system("cls");
		dashboard();
	}
	else{
		exit(0);
	}
	
}

void addbook(){
	fstream file;
	file.open("bookinfo.txt",ios::out | ios::app);
	string name, id, author;
	int q;
	
	cout<<"\n\n\t\tEnter Book ID : ";
	cin>>id;
	
	cout<<"\n\n\t\tEnter Book Name : ";
	cin.ignore();
	getline(cin,name);
	
	cout<<"\n\n\t\tEnter Author Name : ";
	getline(cin,author);
	
	cout<<"\n\n\t\tEnter Book Quantity : ";
	cin>>q;
	
	file<<id<<"\t"<<name<<"\t\t\t"<<author<<"\t\t\t"<<q<<endl;
	
	ifstream file1("book.txt");
	
	if(file1.is_open()){
		string s;
		cout<<endl<<"ID\tNAME\t\t\tAUTHOR\t\t\tQUANTITY"<<endl;	
		while(getline(file1,s)){
				
			cout<<s<<endl;
			
		}
		file.close();
	}
}

void member(){
	
	void memberregister();
	void searchmember();
	int i;
		cout<<"\n\t************ ABOUT OUR MEMBERS ************\n";
        cout<<"\n\t\t>>Please Choose One Option:\n";
        cout<<"\n\t\t1. New Member Registration\n\n\t\t2. Search for Member\n";
        cout<<"\n\n\t\tEnter your choice : ";
        cin>>i;
        system("cls");
        
       if(i==1){
       	
       		memberregister();
       		
	   }
	   else if(i==2){
	   		
	   		searchmember();
	   }
}

void memberregister(){
	fstream file,f2;
	f2.open("memberlist.txt", ios::out);
	file.open("member.txt",ios::out | ios::app);
	string name, id, c, date, pw;
	
	cout<<"\n\n\t\tEnter ID : ";
	cin>>id;
	
	cout<<"\n\n\t\tEnter Name : ";
	cin.ignore();
	getline(cin,name);
	f2<<name<<endl;
	f2.close();
	
	cout<<"\n\n\t\tEnter Class : ";
	getline(cin,c);
	
	cout<<"\n\n\t\tEnter Date : ";
	cin>>date;
	
	/*cout<<"\n\n\t\tEnter Password : ";
	cin.ignore();
	getline(cin,pw);*/
		
	file<<id<<"\t"<<name<<"\t\t"<<c<<"\t\t"<<date<<"\t\t"<<pw<<endl;
	cout<<"\n\n\t\tREGISTRATION SUCCESSFUL!!"<<endl;
	ifstream file1("memberinfo.txt");
	
	if(file1.is_open()){
		string s;
		cout<<endl<<"\t\tID\tNAME\t\t\tCLASS\t\t\tREGISTERED DATE"<<endl;	
		while(getline(file1,s)){
				
			cout<<"\t\t"<<s<<endl;
			
		}
		file.close();
	}
	int j;
	
	cout<<"\n\n\t\t1. Back to Main Menu"<<endl;
	cout<<"\t\t2. Close the Program"<<endl;
	cin>>j;
	if(j==1){
		system("cls");
		dashboard();
	}
	else{
		exit(0);
	}
}

void searchmember(){
	bool d;
	string name;
	
	cout<<"\n\n\t\tEnter Member Name : ";
	cin.ignore();
	getline(cin,name);
	//cout<<name;
	
	fstream file("memberlist.txt",ios::in);
	string data;
	
	while(getline(file,data)){
		if(data==name){
			//cout<<data;
			d=true;
		}else{
			//cout<<data;
			d=false;
		}
	}
	
	if(d=true){
		ifstream file1("memberinfo.txt");
	
		if(file1.is_open()){
		string s;
		cout<<endl<<"\t\tID\tNAME\t\t\tCLASS\t\t\tREGISTERED DATE"<<endl;	
		while(getline(file1,s)){
				
			cout<<"\t\t"<<s<<endl;
			
		}
		file.close();
	}
			cout<<"\n\n\t\t"<<name<<" exists.";
			}
	else{
			cout<<"\n\n\t\t"<<name<<" doesn't exist.";
			}
	
	
	int j;
	cout<<"\n\n\t\t1. Back to Main Menu"<<endl;
	cout<<"\t\t2. Close the Program"<<endl;
	cin>>j;
	if(j==1){
		system("cls");
		dashboard();
	}
	else{
		exit(0);
	}
}

int main(){
	int i;
		cout<<"\n\t************ LIBRARY MANAGEMENT ************\n";
        cout<<"\n\t\t>>Please Choose One Option:\n";
        cout<<"\n\t\t1. Log In\n\n\t\t2. Sign Up\n";
        cout<<"\n\t\tEnter your choice : ";
        cin>>i;
        //system("cls");
        
       if(i==1){
       	
       		login();
       		
	   }
	   else if(i==2){
	   		
	   		user_registration();
	   }
}

//void login();
//void user_registration();
