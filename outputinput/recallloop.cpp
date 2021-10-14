#include<iostream>

using namespace std;
//function
//datatype(int , float, string , char , void) function_name function symbol() {}
/*int addition(){
	
} 
*/

//parameterrized function
//(int a)

//default function
int addition();//decleration
void substraction();

void title();
void title(int a);
void title(int a,int b);

int main(){
	int a,b;
	title();//function call;
	title(a);
	title(a,b);
	int age=20;
	cout<<age;

}

int addition(){//definition
	int a=10,b=10;
	int c=a+b;
	return c;
}

void substraction(){
	int a=10,b=5;
	int c=a-b;
	cout<<c;
}
void title(){
	cout<<"========  ========  ====== ======  =======  ======="<<endl;
	cout<<"||        ||    ||  ||     ||      ||       ||"<<endl;
	cout<<"||        ||    ||  ||===  ||===   ||====   ||===="<<endl;
	cout<<"||        ||    ||  ||     ||      ||       ||"<<endl;
	cout<<"========  ========  ||     ||      =======  ======="<<endl;
}
void title(int a){
	cout<<"========  ========  ====== ======  =======  ======="<<endl;
	cout<<"||        ||    ||  ||     ||      ||       ||"<<endl;
	cout<<"||        ||    ||  ||===  ||===   ||====   ||===="<<endl;
	cout<<"||        ||    ||  ||     ||      ||       ||"<<endl;

}
void title(int a,int b){
	cout<<"========  ========  ====== ======  =======  ======="<<endl;
	cout<<"||        ||    ||  ||     ||      ||       ||"<<endl;
	cout<<"||        ||    ||  ||===  ||===   ||====   ||===="<<endl;
	cout<<"||        ||    ||  ||     ||      ||       ||"<<endl;
	cout<<"========  ========  ||     ||      =======  ======="<<endl;
}

