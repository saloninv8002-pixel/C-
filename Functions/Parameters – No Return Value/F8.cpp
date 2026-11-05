//Write a function that accepts a number and prints its multiplication table.
#include<iostream>
using namespace std;
void Tables(int n){
	for(int i=1;i<=10;i++){
		cout<<n<<" * "<<i<<" = "<<n*i<<endl;
	}
}
int main(){
	int n;
	cout<<"Enter Number : ";
	cin>>n;
	Tables(n);
	return 0;
}
