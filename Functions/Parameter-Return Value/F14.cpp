//Parameters – Return Value
//Check leap years .
#include<iostream>
using namespace std;
bool leap(int year){
	if((year%4==0 &&year%100!=0)||(year%400==0)){
		return true;
	}
	return false;
}
int main(){
	bool leap_year;
	int year;
	cout<<"Enter Year : ";
	cin>>year;
	leap_year=leap(year);
	if (leap_year){
		cout<<"Its a Leap Year";
	}
	else{
		cout<<"Not a Leap Year";
	}
	return 0;
}
