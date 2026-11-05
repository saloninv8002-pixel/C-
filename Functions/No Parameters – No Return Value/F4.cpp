//Write a function to print all even numbers from 1 to 50.	
#include<iostream>
using namespace std;
void even_numbers(){
	for(int i=1;i<=50;i++){
		if(i%2==0){
			cout<<i<<" , ";
		}
	}
}
int main(){
	even_numbers();
	return 0;
}
