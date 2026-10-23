#include<iostream>
using namespace std;
int main(){
	int arr[5],value,sum=0;
	float avg;
	cout<<"Enter Values : "<<endl;
	for(int i=0;i<5;i++){
		cin>>value;
		arr[i]=value;
		sum+=value;
	}
	avg=(float)sum/5;
	cout<<"Average : "<<avg<<endl;
	return 0;
}
//Average
