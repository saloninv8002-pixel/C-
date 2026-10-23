#include<iostream>
using namespace std;
int main(){
	int arr[5],value,largest;
	cout<<"Enter Values : "<<endl;
	for(int i=0;i<5;i++){
		cin>>value;
		arr[i]=value;
	}
	largest=arr[0];
	for(int j=1;j<5;j++){
		if (largest<arr[j]){
			largest=arr[j];
		}
	}
	cout<<"The Largest element in the array : "<<largest;
	return 0;
}
//largest in an array
