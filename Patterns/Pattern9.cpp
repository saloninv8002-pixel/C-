#include<iostream>
using namespace std;
int main(){
	char k='A';
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			cout<<k++<<" ";
		}
		cout<<endl;
	}
	return 0;
}
//A B C D E
//F G H I J
//K L M N O
//P Q R S T
//U V W X Y
