#include<iostream>
using namespace std;
int main(){
	int arr[5],value;
	cout<<"Enter Values : "<<endl;
	for(int i=0;i<5;i++){
		cin>>value;
		arr[i]=value;
	}
	cout<<"The Elements in an Array : "<<endl;
	for(int j=0;j<5;j++){
		cout<<arr[j]<<endl;
	}
	return 0;
}
//print array
