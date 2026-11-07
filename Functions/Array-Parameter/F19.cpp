//Count the odd numbers in an array
#include<iostream>
using namespace std;
void odd(int arr[],int n){
	int count=0;
	for(int i=0;i<n;i++){
		if(arr[i]%2!=0){
			count++;
		}
	}
	cout<<"Number of Odd Numbers : "<<count;
}
int main(){
	int arr[5]={12,34,45,67,89};
	odd(arr,5);
	return 0;
}
