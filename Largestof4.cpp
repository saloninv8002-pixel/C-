#include <iostream>
using namespace std;
int main(){
	int a,b,c,d;
	cout<<"Enter A B C D : "<<endl;
	cin>>a>>b>>c>>d;
	if(a==b && b==c && c==d && d==a){
		cout<<"All are Equal";
	}
	else if(a>=b && a>=c && a>=d){
		cout<<"The Largest : "<<a<<endl;
	}
	else if(b>=a && b>=c && b>=d){
		cout<<"The Largest : "<<b<<endl;
	}
	else if(c>=b && c>=a && c>=d){
		cout<<"The Largest : "<<c<<endl;
	}
	else{
		cout<<"The Largest : "<<d<<endl;
	}
	return 0;
}
