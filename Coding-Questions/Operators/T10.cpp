//Write a C++ program to calculate the total and average of three subject marks using arithmetic operators.
#include<iostream>
using namespace std;
int main(){
	int mark,total=0;
	float avg;
	for(int i=1;i<=3;i++){
		cout<<"Enter your "<<i<<" mark : ";
		cin>>mark;
		total+=mark;
	}
	avg=(float)total/3;
	cout<<"Total Marks : "<<total<<endl;
	cout<<"Average Marks : "<<avg;
	return 0;
}
