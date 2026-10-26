//Write a C++ program to calculate an electricity bill based on the number of units consumed and a given tariff structure.
#include<iostream>
using namespace std;
int main(){
	double units;
	cout<<"Enter Units Consumed : ";
	cin>>units;
	if (units>=0 && units<=100){
		cout<<"Bill : "<<units*1.50<<"Rs";
	}
	else if (units>=101 && units<=200){
		cout<<"Bill : "<<units*2.50<<"Rs";
	}
	else if (units>=201 || units<=300){
		cout<<"Bill : "<<units*4<<"Rs";
	}
	else{
		cout<<"Bill : "<<units*6<<"Rs";
	}
	
	return 0;
}
