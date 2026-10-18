#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter Number : ";
	cin>>n;
	int first=0,second=1;
	for(int i=1;i<n;i++){
		int next=first+second;
		first=second;
		second=next;
	}
	cout<<first<<endl;
	return 0;
}
