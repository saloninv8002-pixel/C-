#include<iostream>
using namespace std;
int main(){
	int k=5;
	for(int i=1;i<=5;i++){
	for(int j=1;j<=i;j++){
			cout<<k<<" ";
		}
		k--;
		cout<<endl;
	}
	return 0;
}
