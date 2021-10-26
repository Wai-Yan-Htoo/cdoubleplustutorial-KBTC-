#include<iostream>
using namespace std;
//datatype func_name
int check(){
	int num=10,num1=20,num2=30;
	if(10==1){
		cout<<"it is equal"<<endl;
	}
	return num1;
	return num;
	return num2;
}
//keyword name
struct Hero{
		int num1,num2;
		string name;
		int Hp,Damage; 
};
//operator override
int main(){
	Hero h3,h4;
	h4.num1=10;
	h3.num2=20;
	
//	cout<<h2.Hp-h1.Damage+10;
	cout<<" h3 num2 - h4 num1 = "<<h3.num2-h4.num1<<endl;
	
	//-----------------------------------------------
	//hero need data
	string choice;
	Hero h1,h2;//character h1 and h2
	cout<<"enter h1 name : Hp : Damage : ";
	cin>>h1.name>>h1.Hp>>h1.Damage;
	cout<<h1.name<<h1.Hp<<h1.Damage<<endl;
	
	cout<<"enter h2 name : Hp : Damage : ";
	cin>>h2.name>>h2.Hp>>h2.Damage;
	cout<<h2.name<<h2.Hp<<h2.Damage<<endl;
	//------------------------------------------------
	
	
	
	bool stop=true;
	
	while(stop){
	
	cout<<"choose who want to first h1 or h2 : ";

	cin>>choice;
	if(choice=="h1"){
		//cout<<" h2 hp = "<<h2.Hp<<" h1 damage = "<<h1.Damage<<endl;
		h2.Hp=h2.Hp-h1.Damage;
		//h1.Hp=h1.Hp-h2.Damage;
	}else{
		h1.Hp=h1.Hp-h2.Damage;
		//h2.Hp=h2.Hp-h1.Damage;
	}
	if(h1.Hp<=0){
		stop=false;
	}else if(h2.Hp<=0){
		stop=false;
	}
	
	if(h1.Hp>h2.Hp){
		cout<<h1.name<<" winner winner chicken dinner"<<endl;
	}
	else{
		cout<<h2.name<<"  winner winner chicken dinner"<<endl;
	}
	
	cout<<"--------hero data ------"<<endl;
	cout<<"hero name "<<" hero Hp "<<" hero Damage "<<endl;
	cout<<h1.name<<"   "<<h1.Hp<<"       "<<h1.Damage<<endl;
	cout<<h2.name<<"   "<<h2.Hp<<"       "<<h2.Damage<<endl;
}
}
