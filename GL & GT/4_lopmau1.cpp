// LOP mau 
#include<bits/stdc++.h>
using namespace std;

template <class T, class K>
double fun(T *a, int n, T f(T)){	//kieu T day a co n phan tu

	double s=0;
	for(int i=0;i<n;i++)	s+=f(a[i]);
	return s;
	
}
double bp(double x){
	return x*x;
}
int main(){
	double a[]={4, 7, 2, 8, 5};
	int n=sizeof(a)/sizeof(a[0]);
	cout<<"\nTong cac can "<<fun(a,n,sqrt);
	cout<<"\nTong cac sin "<<fun(a,n,sin);
	cout<<"\nTong cac binh phuong "<<fun(a,n,bp);
	cout<<"\nTong cua day "<<fun<double>(a,n,[](double x){return x;} ); // tong cua bp cua day : x*x
	
	int b[]={3, 7, 2, 1};
	cout<<"\nTong b "<<fun<int>(b,4,[](int z){return z*z;});
	
	};
	// tinhs tong cua cac j thi thay sqrt = cai do


