//cay dung lop phan so
// can bo sung
#include<bits/stdc++.h>
using namespace std;

class ps
{
	long long t, m;
		void rutgon(){
			long long d=__gcd(t, m);
			t/=d; m/=d;
		}
	public:
		ps(int u=0, int v=1){
		t=u;
		m=v;
		this->rutgon();
		}
		friend ostream &operator<<(ostream &os, ps p){
			if(p.m==1) os<<p.t;
			else os<<p.t<<"/"<<p.m;
			return os;
		}
		friend istream &operator>>(istream &is, ps &p){

};
istream &operator>>(istream &is, ps &p){
	char c;
	is>>p.t>>c>>p.m;
	p.rutgon();
	return is;
}
int main(){
	ps p(6,-8);
	cout<<p;
	
	cin>>p;
	cout<<"Phan so sau khi nhap: \n"<<p<<"\n";
}

