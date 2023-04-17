//de quy tren day a1...an
#include<bits/stdc++.h>
using namespace std;

void nhap(int *a, int n)
{
	if(n==0) return ;
	nhap(a,n-1);
	cout<<"a["<<n<<"] : " ; cin>>a[n];
}
void xuat(int *a, int n)
{
	if(n){
		xuat(a,n-1);
		cout<<a[n]<<" ";
	}
}
int tong(int *a, int n){	//tong tu a[1]+...+a[n]
	return n==0?0:tong(a,n-1)+a[n];	//xem lai
}

int Max(int *a, int n)
{
	return n==1?a[n]:max(Max(a,n-1),a[n]);
}

int MAX(int *a, int L, int R)
{
	if(L==R) return a[L];
	int M=(L+R)/2;
	return max(MAX(a, L, M), MAX(a,M+1,R)); //xem lai
}

void sapxep(int *a, int n)
{
	if(n<=1)	return;	//ham void thi chi return;
	sapxep(a,n-1);
	for(int i=n;i>1 && a[i-1] > a[i];i--) swap(a[i-1],a[i]);
}
int main(){
	int n, a[1000];
	cout<<"n = "; cin>>n;
	nhap(a,n);
	cout<<"\nDay vua nhap: ";
	xuat(a,n);
	cout<<"\nTong la: "<<tong(a,n);
	cout<<"\nMax = "<<Max(a,n);
	cout<<"\nMAX = "<<MAX(a,1,n);
	//ham MAX co san cua C++ :
	cout<<"\nGia tri max co san: "<<*max_element(a+1,a+n+1);
	sapxep(a,n);
	cout<<"\nDay sau khi sap xep: ";
	xuat(a,n);
}

