
#include<iostream>
#include<fstream>
#include <ctime>
#include <cstdlib> // Needed to use random numbers
#include<windows.h>
using namespace std;

void rules();
void casino_play();

bool lowercase(string pwd){
	for(int i=0;i<pwd.length();i++){
		if(islower( pwd[i] ))  {
			cout<<"lower case";
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
				cout<<"long password"<<endl;
				cout<<" special character = "<<pwd[i]<<endl;
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

void user_registration(){
	//user registration
	string name,pwd;
	ofstream file;
	int a=0;
	while(a==0){
		
		cout<<"enter name : ";
		getline(cin,name);
		if(check_name(name)==true){
			file.open(name.c_str(),ios::out);
			int a1=0;	
			while(a1==0){
				cout<<"enter password : ";
				cin>>pwd;
				if(lowercase(pwd)==true && uppercase(pwd)==true && alpha(pwd)==true && digit(pwd)==true && len_spec(pwd)==true){
					cout<<"strong password";
					a1=1;
				}else{
					a1=0;
				}
	
			}	
			//string sequence of char  c_str()
			file<<pwd;
			a=1;
			file.close();
		}else{
			cout<<"Already exit"<<endl;
		}		
	}
	
}

void login(){
	
	string name;
	cout<<"enter name : ";
	getline(cin,name);
	ifstream file;
	string data;
	file.open(name.c_str());
	while(getline(file,data)){
	}
	
	string password;
	int a=1;
	
	for(int i=1;a==1;){
		cout<<"enter password : ";
		cin>>password;
		cin.ignore();
		if(password==data){
			cout<<"login success";
			a=0;
		}
		else{
			cout<<"Login fail"<<endl;
		
			if(i==5){
				i=1;
				Sleep(30000);
			}
			i++;
		}
		
	
	}
	
}


int main(){
	
	string choose;
	cout<<"1. Registration"<<endl;
	cout<<"2. Login in system"<<endl;
	cout<<"choose any option : ";
	cin>>choose;
	cin.ignore();
	if(choose=="1"){
		user_registration();	
	}
	else{
		login();	
	}
	casino_play();
	
}

void casino_play(){
	string playerName;
    int balance; // stores player's balance
    int bettingAmount;
    int guess;
    int dice; // stores the random number
    char choice;
    srand(time(0)); // "Seed" the random generator
    cout << "\n\t\t========WELCOME TO CASINO WORLD=======\n\n";
	cout << "\n\nWhat's your Name : ";
    getline(cin, playerName);
    cout << "\n\nEnter the starting balance to play game : $";
    cin >> balance;
    do
    {
        system("cls");
        rules();
        cout << "\n\nYour current balance is $ " << balance << "\n";
// Get player's betting balance
        do
        {
            cout << "Hey, " << playerName<<", enter amount to bet : $";
            cin >> bettingAmount;
            if(bettingAmount > balance)
                cout << "Betting balance can't be more than current balance!\n"
                       <<"\nRe-enter balance\n ";
        }while(bettingAmount > balance);
// Get player's numbers
        do
        {
            cout << "Guess any betting number between 1 & 10 :";
            cin >> guess;
            if(guess <= 0 || guess > 10)
                cout << "\nNumber should be between 1 to 10\n"
                    <<"Re-enter number:\n ";
        }while(guess <= 0 || guess > 10);
        dice = rand()%10 + 1;
        if(dice == guess)
        {
            cout << "\n\nYou are in luck!! You have won Rs." << bettingAmount * 10;
            balance = balance + bettingAmount * 10;
        }
        else
        {
            cout << "Oops, better luck next time !! You lost $ "<< bettingAmount <<"\n";
            balance = balance - bettingAmount;
        }
        cout << "\nThe winning number was : " << dice <<"\n";
        cout << "\n"<<playerName<<", You have balance of $ " << balance << "\n";
        if(balance == 0)
        {
            cout << "You have no money to play ";
            break;
        }
        cout << "\n\n-->Do you want to play again (y/n)? ";
        cin >> choice;
    }while(choice =='Y'|| choice=='y');
    cout << "\n\n\n";
    cout << "\n\nThanks for playing the game. Your balance is $ " << balance << "\n\n";
    //return 0;
}

void rules()
{
    system("cls");
    cout << "\t\t======CASINO NUMBER GUESSING RULES!======\n";
    cout << "\t1. Choose a number between 1 to 10\n";
    cout << "\t2. Winner gets 10 times of the money bet\n";
    cout << "\t3. Wrong bet, and you lose the amount you bet\n\n";
}

