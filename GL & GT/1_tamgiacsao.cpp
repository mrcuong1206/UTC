#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	string t(20,'$');
	cout<<t<<endl;
	cin>>n;
	for(int i=1;i<=n;i++)
		cout<<setw(n)<<right<<string(i,'*')<<" \n";
}

