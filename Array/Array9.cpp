#include<iostream>
using namespace std;
int main(){
	int arr[5]={1,2,3,4,5};
	int value;
	bool flag=false;
	cout<<"Enter Value to be searched : "<<endl;
	cin>>value;
	for(int j=0;j<5;j++){
		if (value==arr[j]){
			flag=true;
			break;
		}
		else{
			flag=false;
		}
	}
	if(flag){
		cout<<"The element searched is Found";
	}
	else{
		cout<<"The element searched is not Found";
	}

	return 0;
}//search element

