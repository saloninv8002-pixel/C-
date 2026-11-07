//Create overloaded functions named display() to print: An integer  A float A character A string
#include<iostream>
#include<string>
using namespace std;

void display(int a) {
    cout<<a<<endl;
}

void display(double a) {
    cout<<a<<endl;
}
void display(string a) {
    cout<<a<<endl;
}
void display(char a) {
    cout<<a;
}

int main() {
    display(10);
    display(3.7);
    display("Saloni");
    display('s');
    
    return 0;
}
