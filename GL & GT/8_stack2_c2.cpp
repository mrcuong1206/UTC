#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n+5]={INT_MAX};
	stack< int > S; // chi chua vi tri, khong chua gia tri
	for(int i=1;i<=n;i++){
		cin>>a[i];
		while(a[S.top()] <= a[i])  S.pop();
		cout<<i-S.top() << " ";
		S.push(i);
	}
}

