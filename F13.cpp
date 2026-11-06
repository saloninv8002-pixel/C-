//Parameters – Return Value
//Return the HCF of 2 numbers.
#include<iostream>
#include<numeric>
using namespace std;
int gcd1(int a,int b){
	int g;
	g=gcd(a,b);
	return g;
}
int main(){
	int a,b;
	cout<<"Enter A and B : ";
	cin>>a>>b;
	cout<<"GCD of A and B : "<<gcd1(a,b);
	return 0;
}
