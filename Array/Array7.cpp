#include<iostream>
using namespace std;
int main(){
	int arr[5],value,largest,second_largest;
	cout<<"Enter Values : "<<endl;
	for(int i=0;i<5;i++){
		cin>>value;
		arr[i]=value;
	}
	largest=arr[0];
	for(int j=1;j<5;j++){
		if (largest<arr[j]){
			second_largest=largest;
			largest=arr[j];
		}
	}
	cout<<"The Largest element in the array : "<<largest<<endl;
	cout<<"The Second Largest element in the array : "<<second_largest;
	return 0;
}
//secondlargest in an array
