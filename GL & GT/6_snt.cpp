#include<bits/stdc++.h>
using namespace std;

bool ktnt(int n){
	int d=0;
	for(int i=1;i<=n;i++)	d+=n%i==0;
	return d==2;
}
bool isprime (int n)
{
	if(n==2)	return 1;
	if(n<2 || n%2==0) return 0;
	for(long long i=3;i*i<=n;i++)
		if(n%i==0)	return 0;
	return 1;
}
int main(){
	int n=1e9+7;
	if(ktnt(n))	cout<<"YES";
	else	cout<<"NO";
}

