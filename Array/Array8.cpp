#include<iostream>
using namespace std;
int main(){
	int arr[5],value,even=0,odd=0;
	cout<<"Enter Values : "<<endl;
	for(int i=0;i<5;i++){
		cin>>value;
		arr[i]=value;
	}
	for(int j=0;j<5;j++){
		if (arr[j]%2==0){
			even++;
		}
		else{
			odd++;
		}
	}
	cout<<"Number of Even Numbers : "<<even<<endl;
	cout<<"Number of odd Numbers : "<<odd;

	return 0;
}
//number of even and odd
