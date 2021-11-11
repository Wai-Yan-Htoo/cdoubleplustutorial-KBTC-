#include<iostream>
#include<fstream>

using namespace std;
int main(){
	ifstream file("test.txt");
	//eof=end of file
	char ch;
	while(!file.eof()){
		file.get(ch);
		cout<<ch;
	}
	file.close();
}
