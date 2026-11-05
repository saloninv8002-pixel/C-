//Read two coordinates and return the distance between them
#include<iostream>
#include<cmath>
using namespace std;
double coordinates(){
	int x1,y1,x2,y2;
	cout<<"Enter X1, Y1 : ";
	cin>>x1>>y1;
	cout<<"Enter X2, Y2 : ";
	cin>>x2>>y2;
	float distance=sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
	return distance;
	
}
int main(){
	cout<<"The Distance : "<<coordinates();
	return 0;
}

