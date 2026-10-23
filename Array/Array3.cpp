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
	cout<<"Sum of elements in an array: "<<sum<<endl;
	return 0;
}
//sum of elements
