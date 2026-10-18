#include<iostream>
using namespace std;
int main(){
	int n;
	bool flag=true;
	cout<<"Enter a Number : "<<endl;
	cin>>n;
	if(n<2){
		cout<<"Neither Prime Nor Composite";
	}
	else{
	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			flag=false;
			break;
		}
	}
}
	if(flag){
		cout<<"Prime Number";
	}
	else{
		cout<<"Composite Number";
	}
	return 0;
}
