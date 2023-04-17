//nap chong ham (viet cac ham trung ten nhau)
#include<bits/stdc++.h>
using namespace std;

void nhap(int &n, int *&a)
{
	cout<<"Nhap so phan tu cua day a: ";
	cin>>n;
	a=new int[n];
	for(int i=0;i<n;i++)
	{
		cout<<"a["<<i<<"] = ";
		cin>>a[i];
	}
}
void nhap(int &n, double *&a){
	cout<<"Nhap so phan tu cua day b: ";
	cin>>n;
	a=new double[n];
	for(int i=0;i<n;i++)
	{
		cout<<"b["<<i<<"] = ";
		cin>>a[i];
	}
}
void xuat(int n, int *a)  {for(int i=0;i<n;i++)	cout<<a[i]<<" ";}
void xuat(int n, double *a)  { for(int i=0;i<n;i++)	cout<<a[i]<<" ";}

int main(){
	int n, *a, m;
	double *b;
	nhap(n,a);
	nhap(m,b);
	cout<<"\nDay a: "; xuat(n,a);
	cout<<"\nDay b: "; xuat(m,b);
	delete []a, delete []b;
}

