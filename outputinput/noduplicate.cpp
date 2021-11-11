#include<iostream>
using namespace std;
int main(){
	 int ind=0;
    string arr[10];
    
    string s ;
    getline(cin,s);
    
    for (int i=0;i<s.length();i++) {
        if(s[i]!=' '){
            arr[ind]+=s[i];
        }else{
            ind+=1;
        }
       
    }
   
    
}
