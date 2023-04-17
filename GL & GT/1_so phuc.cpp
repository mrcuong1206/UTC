//Giai PT bac nhat tren truong so phuc
//ax+b=0
#include<bits/stdc++.h>
#include<complex>
using namespace std;
int main(){
	complex<double> a,b,zero(0,0);
	cout<<"Nhap cac he so a va b: ";
	cin>>a>>b;
	if(a==zero) cout<<(b==zero?"Vo so nghiem":"Vo nghiem");
	else cout<<"x= "<<-b/a;
	



}

