//Write a C++ program to calculate the sum and average of array elements.

#include<iostream>
using namespace std;
int main(){
	int arr[5],value,sum=0;
	cout<<"Enter Values : "<<endl;
	for(int i=0;i<5;i++){
		cin>>value;
		arr[i]=value;
		sum+=value;
	}
	double avg=sum/5;
	cout<<"Sum of elements in an array: "<<sum<<endl;
	cout<<"Average of elements in an array: "<<avg;
	return 0;
}
