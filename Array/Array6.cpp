#include<iostream>
using namespace std;
int main(){
	int arr[5],value,smallest;
	cout<<"Enter Values : "<<endl;
	for(int i=0;i<5;i++){
		cin>>value;
		arr[i]=value;
	}
	smallest=arr[0];
	for(int j=1;j<5;j++){
		if (smallest>arr[j]){
			smallest=arr[j];
		}
	}
	cout<<"The smallest element in the array : "<<smallest;
	return 0;
}
//smallest in an array
