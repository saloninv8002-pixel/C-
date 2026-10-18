#include<iostream>
using namespace std;
int main(){
	int even=0,odd=0,n;
	cout<<"Enter Number : ";
	cin>>n;
	for(int i=1;i<=n;i++){
		if (i%2==0){
			even+=1;
		}
		else{
			odd+=1;
		}
	}
	cout<<"Number of Even Numbers : "<<even<<endl;
	cout<<"Number of Odd Numbers : "<<odd;
	return 0;
}
