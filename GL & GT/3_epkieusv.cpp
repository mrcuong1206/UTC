#include<bits/stdc++.h>
using namespace std;

class sv{
	public:
	string ten;
	int diem;
	
		sv(string t="chi pheo", int d=10){			//ham tao ne.
			ten=t;
			diem=d;
		}
};

int main(){
	sv A,B("thi no",11),C("lao hac");
	cout<<"A: "<<A.ten<<"\t"<<A.diem<<endl;
	cout<<"B: "<<B.ten<<"\t"<<B.diem<<endl;
	cout<<"C: "<<C.ten<<"\t"<<C.diem<<endl;
	
	A=sv("giao thu");	//ep kieu
	cout<<"A: "<<A.ten<<"\t"<<A.diem<<endl;
	
	sv *p=new sv("Thay Cuong", 9);
	cout<<"\nA: "<<p->ten<<"\t"<<p->diem;
}

