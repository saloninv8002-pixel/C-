#include<iostream>
using namespace std;
int main(){
	for(int i=1;i<=5;i++){
		int k=5;
		for(int j=1;j<=i;j++){
			cout<<k--<<"";
		}
		cout<<endl;
	}
	return 0;
}
//5
//54
//543
//5432
//54321
