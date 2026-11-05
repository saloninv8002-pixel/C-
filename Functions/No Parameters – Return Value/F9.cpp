//No Parameters – Return Value
//Read 2 sides and return the area of a triangle.
#include<iostream>
using namespace std;
int Triangle_area(){
	int b,h;
	cout<<"Enter Base : ";
	cin>>b;
	cout<<"Enter Height : ";
	cin>>h;
	float area=0.5*b*h;
	return area;
}
int main(){
	cout<<"Area of Rectangle : "<<Triangle_area();
	return 0;
}
