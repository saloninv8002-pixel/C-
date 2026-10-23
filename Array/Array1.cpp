#include<iostream>
#include<vector>
using namespace std;
int main(){
	int N,value;
	cout<<"Enter the Number of Values : "<<endl;
	cin>>N;
	vector<int>arr(N);
	cout<<"Enter values : "<<endl;
	for(int i=0;i<N;i++){
		cin>>value;
		arr[i]=value;
	}
	cout<<"Elements in an Array : "<<endl;
	for(int j=0;j<N;j++){
		cout<<arr[j]<<endl;
	}
	return 0;
}
//Read N elements and print all the elements.
