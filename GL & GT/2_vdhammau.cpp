//VD ham mau
#include<bits/stdc++.h>
using namespace std;

template <class T, class K>
void sx(T *a, int n, K ss)	//day a co n phan tu
{
	for(int i=0;i<n;i++)
	for(int j=i+1;j<n;j++)
	if(ss(a[j], a[i]))	swap(a[i],a[j]);
}

bool cmp(int a, int b) {
	return a<b;	//xs binh thuong	
}
using namespace std;
int main(){
	cout<<"Nhap so phan tu: ";
	int n;
	cin>>n;
	float a[n];
	for(auto &x:a)
	cin>>x;
	
	sx(a,n,cmp);
	cout<<"Sau khi sx: \n";
	for(auto x:a) cout<<x<<" ";
	
	int b;
	
}

