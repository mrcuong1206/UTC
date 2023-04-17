//giai thua
#include<bits/stdc++.h>
using namespace std;

long long giaithua(int n)
{
	return n?n*giaithua(n-1):1;
}
int main(){
	for(int k=0;k<10;k++)	
	cout<<k<<" "<<giaithua(k)<<"\n";
}

