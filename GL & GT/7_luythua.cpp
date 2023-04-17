//luy thua
#include<bits/stdc++.h>
using namespace std;

//2^100 -> 4^50 -> 16^25 -> 16*(256^12)
long long POW(int x, int n)
{
	if(n==0) return 1;
	return n%2?x*POW(x*x,n/2):POW(x*x,n/2);
}

long long luythua(long long x, int n)
{
	if(n==0) return 1;
	long long t=luythua(x,n/2);
	return n%2?x*t*t:t*t;
}
int main(){
	cout<<POW(2,10)<<"\n";
	cout<<luythua(2,10);
}

