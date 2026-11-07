//fibonacci
#include<iostream>
using namespace std;

int fibonacci(int n) {
	
	if (n==0)
	return 0;
	
	if (n==1)
	return 1;
	
	return fibonacci(n-2)+fibonacci(n-1); 
}
int main(){
	int n;
	cout<<"Enter N : ";
	cin>>n;
	for(int i=0;i<n;i++){
	
	cout<<fibonacci(i)<<endl;
}
	return 0;
}
