#include<bits/stdc++.h>
using namespace std;

bool ktsocp(int n)	//16, 25, 100, 244
{
	if(n<0) return 0;
	if(n%3==2 or n%4>=2) return 0;
	int L=0, R=n, M;
	while(L<=R){
		M=(L+R)/2;
		if(M*M==n) return  true;
		M*M>n?R=M-1:L=M+1;
	}
	return false;
}
// 2 <= T(n) <= 
int main(){
	for(int i = 0;i<1000;i++)	if(ktsocp(i))	cout<<i<< " ";
}

