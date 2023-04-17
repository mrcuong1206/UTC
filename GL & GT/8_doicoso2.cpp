//doi co so 2
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	char Hex[] = "0123456789ABCDEFGHIJKLMNOPQRSTUWXYZ";
	cout<<Hex[0];
	stack <int> S;
	cout<<"\nNhap n: ";
	cin>>n;
//	while(n){ S.push(n%2 ) ; n/=2;}
//	for(;n;n/=2) S.push(n%2);

	while(n){ S.push(Hex[n%16]); n/=16;}
	
	while(S.size()) {cout<<S.top(); S.pop();}
	
}

