//Thuat toan
#include<bits/stdc++.h>
using namespace std;
#define in(x) {cout<<"Nhap "<<#x<< " = "; cin>>x;}
			//1....Them x=abs(x) -> la gia tri tuyet doi
int main(){
	buoc1:
		int a, b;
		in(a);
		in(b);
		if(a<=0 or b<=0)	goto buoc1;	//1....Co gia tri tuyet doi r thi k can DIEU KIEN
		
	buoc2:
		if(a!=b){
			a>b?a-=b:b-=a;
			goto buoc2;
		}
	buoc3:
		cout<<"UCLN la : "<< a;
}

