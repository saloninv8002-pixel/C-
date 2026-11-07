//maximum of elements
#include<iostream>
using namespace std;
void max(int arr[],int n){
	int max=arr[0];
	for(int i=1;i<n;i++){
		if(max<arr[i]){
			max=arr[i];
		}
	}
	cout<<"Max of Elements : "<<max;
}
int main(){
	int arr[5]={12,34,45,67,89};
	max(arr,5);
	return 0;
}
