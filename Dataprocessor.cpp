#include<iostream>
#include<string>
using namespace std;
int main(){
	string product_name;
	float price;
	bool in_stock;
	cout<<"Enter Product Name : ";
	cin>>product_name;
	cout<<"Price : ";
	cin>>price;
	cout<<"In Stock ? : ";
	cin>>in_stock;
	if (in_stock && price<50){
		cout<<"Budget Item Found";
	}
	else{
		cout<<"Item not suitable";
	}
	return 0;
}
