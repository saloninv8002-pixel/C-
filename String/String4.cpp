#include<iostream>
#include<string>
using namespace std;

int main(){
	string sent,wrong_word,correct_word;
	cout<<"Enter Sentence : "<<endl;
	getline(cin,sent);
	cout<<"Enter the Wrong word : "<<endl;
	getline(cin,wrong_word);
	int pos=sent.find(wrong_word);
	cout<<"Enter the Correct word : "<<endl;
	getline(cin,correct_word);
	sent.replace(pos,wrong_word.size(),correct_word);
	cout<<"Corrected Sentence : "<<sent;
	return 0;
	//find,replace,getline
}
