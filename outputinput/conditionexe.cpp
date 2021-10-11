#include<iostream>

using namespace std;

int main(){
	
	int day,month,year;
	while(true){
	
	cout<<"enter day : ";
	cin>>day;
	cout<<"enter month : ";
	cin>>month;
	
	if(month==12 ){
		if(day>=1 && day<=22){
			cout<<"Sagittarius"<<endl;
		}
		else if(day>=23 && day<=31){
			cout<<"Capricorn (dec 23 - jan 21)"<<endl;
		}
		else{
			cout<<"not valid day"<<endl;
		}
	}
	
	else if(month==1){
		if(day>=1 && day<=21){
			cout<<"Capricorn"<<endl;
		}
		else if(day>=22 && day<=31){
			cout<<"Aquarius"<<endl;
		}
		else{
			cout<<"day is not valid"<<endl;
		}
	}
	
	
	if(month==2){
		if (day>=1 && day<=20){
			cout<<"Aquarius"<<endl;
		}
		else if(day>=21 && day<=28){
			cout<<"Pisces"<<endl;
		}else{
			cout<<"day is not valid"<<endl;
		}
	
	}
	
	
	else if(month==3){
		if(day>=1 && day<=19){
			cout<<"Pisces"<<endl;
		}
		else if(day>=20 && day<=31){
			cout<<"Aries"<<endl;
		}else{
			cout<<"day is not valid"<<endl;
		}
	}
	
	else if(month==4){
		if(day>=1 && day<=20){
			cout<<"Aries"<<endl;
		}
		else if(day>=21 && day<=30){
			cout<<"Taurus"<<endl;
		}
		else{
			cout<<"day is not valid"<<endl;
		}
	}
	
		else if(month==5){
		if(day>=1 && day<=21){
			cout<<"Taurus"<<endl;
		}
		else if(day>=22 && day<=31){
			cout<<"Gemini"<<endl;
		}
		else{
			cout<<"day is not valid"<<endl;
		}
	}
	
		else if(month==6){
		if(day>=1 && day<=22){
			cout<<"Gemini"<<endl;
		}
		else if(day>=23 && day<=30){
			cout<<"Cancer"<<endl;
		}
		else{
			cout<<"day is not valid"<<endl;
		}
	}
		else if(month==7){
		if(day>=1 && day<=22){
			cout<<"Cancer"<<endl;
		}
		else if(day>=23 && day<=31){
			cout<<"Leo"<<endl;
		}
		else{
			cout<<"day is not valid"<<endl;
		}
	}
		else if(month==8){
		if(day>=1 && day<=22){
			cout<<"Leo"<<endl;
		}
		else if(day>=23 && day<=31){
			cout<<"Virgo"<<endl;
		}
		else{
			cout<<"day is not valid"<<endl;
		}
	}
		else if(month==9){
		if(day>=1 && day<=22){
			cout<<"Virgo"<<endl;
		}
		else if(day>=23 && day<=30){
			cout<<"Libra"<<endl;
		}
		else{
			cout<<"day is not valid"<<endl;
		}
	}
		else if(month==10){
		if(day>=1 && day<=22){
			cout<<"Libra"<<endl;
		}
		else if(day>=23 && day<=31){
			cout<<"Scorpio"<<endl;
		}
		else{
			cout<<"day is not valid"<<endl;
		}
	}
	
		else if(month==11){
		if(day>=1 && day<=22){
			cout<<"Scorpio"<<endl;
		}
		else if(day>=23 && day<=30){
			cout<<"Sagittarius"<<endl;
		}
		else{
			cout<<"day is not valid"<<endl;
		}
	}
}
/*
30 sep aprial june nov 
31 jan march may july august october december
29/28 feb 
*/	

	
	
	
	/*string month;
	cout<<"enter month name";
	cin>>month;
	if(month == "january"){
		cout<<"January = 1";	
	}
	else if(month=="february"){
		cout<<"February = 2";
	}
	else if(month=="march"){
		cout<<"March = 3";
	}
	else if(month=="aprial"){
		cout<<"Aprial = 4";
	}
	else if(month=="may"){
		cout<<"May = 5";
	}
	else if(month=="june"){
		cout<<"June = 6";	
	}
	else if(month=="july"){
		cout<<"July = 7";
	}
	else if(month=="august"){
		cout<<"August = 8";
	}
	else if(month=="september"){
		cout<<"September = 9";
	}
	else if(month=="october"){
		cout<<"Ocotber = 10";
	}
	else if(month=="november"){
		cout<<"Novermber = 11";
	}
	else if(month=="december"){
		cout<<"December = 12";
	}
	else{
		cout<<"invalid month";
	}*/
}
