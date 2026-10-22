#include<iostream>
#include<string>
using namespace std;

int main(){
	string msg;
	cout<<"Enter Message : "<<endl;
	getline(cin,msg);
	int pos=msg.find('urgent');
	if (pos==string::npos){
		cout<<"Message doesnt have a word 'URGENT'"<<endl;
	}
	else{
		cout<<"The Word URGENT is found in "<<pos;
	}
return 0;
}
//string::npos
