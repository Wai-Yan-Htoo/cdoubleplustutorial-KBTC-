#include<iostream>


using namespace std;

void car_search(char car_name){
	
	cout<<"Name Company Model"<<endl;
	switch(car_name)
	{
		case 'B': cout<<"BMW  BB     2021";break;
		case 'T': cout<<"Toyota  TT     2016";break;
		case 'P': cout<<"ProBox  pp     2017";break;
		case 'S': cout<<"Saloon  Ss     2019";break;
		case 'R': cout<<"Rolls Royce  RR 2021";break;
		default : cout <<"no car";
	}
	cout<<endl;
}


void Search(){
	cout<<"1. car name "<<endl;
	cout<<"2. company name "<<endl;
	cout<<"3. model "<<endl;
	cout<<"choose option : ";
	string choose;
	char car_name,company,model;
	cin>>choose;
	if(choose=="1"){
		//car name
		bool work=true;
		while(work){
		
		cout<<"enter car name : "<<endl;
		cin>>car_name;  //BMW
		car_search(toupper( car_name));//attribute or parameter
		cout<<"1. continue or 2. exit : ";
		string stop;
		cin>>stop;
		if(stop=="1"){
			work=true;
		}else{
			work=false;
		}
	}
	}
	else if(choose=="2"){
		//company name
		cout<<"company name";
	}
	else{
		//model
		cout<<"model";
	}
}

void Car_list(){
	string car_name[]={"Toyota     ","Probox     ","Saloon     ","BMW        ","Rolls Royce"};
	string car_company[]={"TT","PP","SS","BB","RR"};
	string car_model[]={"2016","2017","2019","2021","2021"};
	cout<<"Car Name       Company  Model"<<endl;
	for(int i=0;i<5;i++){
		cout<<i+1<<"  "<<car_name[i]<<"  "<<car_company[i]<<"      "<<car_model[i]<<endl;
	}
	cout<<"What do you want"<<endl;
}



void Home(){
	cout<<"--------Home----------"<<endl;
	
	cout<<"1. Search"<<endl;
	cout<<"2. Car List"<<endl;
	cout<<"choose any option : ";
	string choose;
	cin>>choose;
	if(choose=="1"){
		//search
		Search();
	}
	else {
		//car list
		Car_list();
	}
}

int main(){
	int rt,tm;
	float amount=30.0;
	Home();
	cout<<"1. Rent or 2. Not : ";
	string rn;
	cin>>rn;
	if(rn=="1"){
		//rent detail
		cout<<"$ 30 per day "<<endl;
		cout<<"Rent times : ";
		cin>>rt;
		tm=amount*rt;
		cout<<"Total amount = "<<tm<<endl;
	}
	else{
		Home();
	}
}
