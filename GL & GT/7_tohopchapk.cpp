//To hop chap K
#include<bits/stdc++.h>
using namespace std;
long long C(int k, int n)
{
	if(k<=0 or k>=n)	return 1;
	return C(k-1,n-1)+C(k,n-1);
}

int main(){
	int n;
	cout<<"Nhap n pascal: ";
	cin>>n;
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=i;j++)	
			cout<<C(j,i)<<" ";
			cout<<endl;
	}
	cout<<"To hop chap K cua N la: "<<C(3,7);
}

