//Find the sum of array elements
#include<iostream>
using namespace std;
void sum(int arr[],int n){
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=arr[i];
	}
	cout<<"Sum of Elements : "<<sum;
}
int main(){
	int arr[5]={12,34,45,67,89};
	sum(arr,5);
	return 0;
}
