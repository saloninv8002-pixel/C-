//print n numsin revese
#include<iostream>
using namespace std;

int print(int n) {
	if(n>0)
	cout<<n<<endl;
	return print(n-1); 
}
int main(){
	int n;
	cout<<"Enter N : ";
	cin>>n;
	
	cout<<print(n);
	return 0;
}
