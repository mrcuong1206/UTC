#include<bits/stdc++.h>
using namespace std;

class dt{
	int n;
	double *a;
	public:
		dt() {n=-1;a=NULL;}
		dt(string fname){
			cout<<"\nNhap da thuc tu file: "<<fname;
			ifstream is(fname); //mo file trong C++11
			is>>n;
			a=new double[n+1];
			for(int i=0;i<=n;i++)
				is>>a[i];
				is.close();
		}
		void xuat(){
			for(int i=0;i<=n;i++)	cout<<a[i]<<" ";
		}
		~dt(){
			if(a!=NULL)
				delete[]a;
				cout<<"\nHam huy Tu goi. ";
		}
};

int main(){
	dt P;
	dt Q("3_dt.txt");
	
	cout<<"\nDa thuc P: ";
	P.xuat();
	cout<<"\nDa thuc Q: ";
	Q.xuat();
}

