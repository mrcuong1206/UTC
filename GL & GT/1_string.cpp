//Xau trong C++
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
	string x; // xau trong C++
	cout<<"Nhap xau: ";
	fflush(stdin);
	//cin>>x;
	getline(cin,x);
	cout<<"xau vua nhap la : "<<setw(30)<<left<<x;
	for(char &c:x) c=toupper(c);
	cout<<x;
	
	
	
	
}

