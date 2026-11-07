//Display elements in an array 
#include<iostream>
using namespace std;
void display(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
}
int main(){
	int arr[5]={12,34,56,78,90};
	display(arr,5);
	return 0;
}
