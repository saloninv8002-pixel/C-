#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"Enter A B C : ";
	cin>>a>>b>>c;
	if(a>b && a>c){
		cout<<"Largest : "<<a<<endl;
	}
	else if(b>a && b>c){
		cout<<"Largest : "<<b<<endl;
	}
	else if(c>a && c>b){
		cout<<"Largest : "<<c<<endl;
	}
	else{
		cout<"All Are Equal";
	}
	return 0;
}
