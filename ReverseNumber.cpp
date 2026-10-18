//Reverse Number
# include<iostream>
using namespace std;
int main(){
	int n,rev=0;
	cout<<"Enter Number : ";
	cin>>n;
	cout<<"Original Number : "<<n<<endl;
	while(n>0){
		rev=rev*10+(n%10);
		n=n/10;
	};
	cout<<"Reversed Number : "<<rev;
	return 0;
} 	 		 
