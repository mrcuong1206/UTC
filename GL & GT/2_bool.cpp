#include<bits/stdc++.h>
using namespace std;

//trong C k co kieu logic, cu dung la khac 0, sai la bang 0
//Trong C++ co kieu bool gom True=1 vaf False=0.
//Cac phep toan logic:
//not ~ ! phu dinh
//and ~ &&
//or ||

int main(){
//	Trong C:
//	int a=3;
//	if(a)	cout<<"a khac 0";
//	if(!a)	cout<<"a=0";

	int n;
	cin>>n;
	int a[n];
//	for(int x:{3,4,5,6})	cout<<x<<" ";	C++11, cout thi dung bt
	for(int &x:a)	cin>>x;	//nhap a[0] -> a[n-1], cin thi them bi danh &
	bool t=0,g=0,b=0;
	for(int i=1;i<n;i++)
	{
		if(a[i-1]<a[i])	t=1;
		if(a[i-1]==a[i])	b=1;
		if(a[i-1]>a[i])	g=1;
		
	}
	int k=t+2*g+4*b;
	string ketluan[]={"Day khong don dieu","Day don dieu tang ngat","Day don dieu giam ngat","Day khong don dieu","Day bang nhau","Day don dieu tang","Day don dieu giam","Day khong don dieu"};
	cout<<ketluan[k];
	//t=1, g=b=0 tang ngat k=1
	//g=1 t=b=0 giam ngat	k=2
	//b=1, t=g=0 day bang	k=4
	//t=b=1, g=0 dd tang
	//g=b=1, t=0 dd giam
	//con lai la linh tinh
}

