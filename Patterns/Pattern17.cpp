#include<iostream>
using namespace std;
int main(){
	for(char i='A';i<='E';i++){
		for(char j='E';j>=i;j--){
			cout<<i<<"";
		}
		cout<<endl;
	}
	return 0;
}
//AAAAA
//BBBB
//CCC
//DD
//E
