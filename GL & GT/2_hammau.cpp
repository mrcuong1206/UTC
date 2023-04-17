//ham mau: la ham nhap so nguyen, hay so thuc cung dc
// va con dung trong swap cx dc.
#include<bits/stdc++.h>
using namespace std;

template <typename T>
void nhap(int &n, T *&a)
{
	cout<<"Nhap so phan tu cua day a: ";
	cin>>n;
	a=new T[n];
	for(int i=0;i<n;i++)
	{
		cout<<"a["<<i<<"] = ";
		cin>>a[i];
	}
}
template <typename Type>
void xuat(int n, Type *a)  {for(int i=0;i<n;i++)	cout<<a[i]<<" ";}

int main(){
	int n, *a, m;
	double *b;
	nhap(n,a);
	nhap(m,b);
	cout<<"\nDay a: "; xuat(n,a);
	cout<<"\nDay b: "; xuat(m,b);
	delete []a, delete []b;
}

