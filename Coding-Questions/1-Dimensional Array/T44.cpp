//Write a C++ program to find the largest and smallest elements in a one-dimensional array.
#include<iostream>
using namespace std;
int main(){
	int arr[5],value,largest,smallest;
	cout<<"Enter Values : "<<endl;
	for(int i=0;i<5;i++){
		cin>>value;
		arr[i]=value;
	}
	largest=arr[0];
	smallest=arr[0];
	for(int j=1;j<5;j++){
		if (largest<arr[j]){
			largest=arr[j];
		}
		if(smallest>arr[j]){
			smallest=arr[j];
		}
	}
	cout<<"The Largest element in the array : "<<largest<<endl;
	cout<<"The Smallest element in the array : "<<smallest;
	return 0;
}
