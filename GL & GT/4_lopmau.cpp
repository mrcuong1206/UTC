// Lop mau
#include<bits/stdc++.h>
using namespace std;
template <class T>

class dathuc{
	int n;		//bac n
	T *a;		// he so T
	public:
		dathuc<T>(){n=0;a=nullptr;} //contro null
		dathuc<T>(string fn){
			ifstream fin(fn);
			fin>>n;
			a=new T[n+1];
			for(int i=0;i<=n;i++)
				fin>>a[i];
				fin.close();
		}
	~dathuc(){
		if(a)	delete[]a;
		cout<<"Ham huy dathuc \n";
	}
	void xuat(){
		cout<<"\n";
		for(int i=0;i<=n;i++)	cout<<a[i]<<" ";
	}
};

int main(){
	dathuc<int> D;	// cac he so D co kieu int
	dathuc<double> P; // cac he so cua P co kieu double
	dathuc<long> *R=new dathuc<long>("4_dathuc.txt");	//con tro tu tao thi tu huy
	R->xuat();
	delete R;
	D.xuat();
}

