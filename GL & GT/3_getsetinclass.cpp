//ham get va set => khong can phai public cho phan private
#include<bits/stdc++.h>
using namespace std;
class ps{
	private:
		int t, m;
	public:
//		ps(int a=0, int b=1)	//ham tao = cau tu
//		{
//			t=a;
//			m=b;
//		}
		void set_t(int a) { t=a ;}
		void set_m(int a) { m=a ;}
		int get_t() { return t ;}
		int get_m() { return m ;}
		
//		void xuat(){ cout<<t<<"/"<<m;}	vd ham mau
};
int main(){
	ps *p=new ps;
	p->set_t(5);
	p->set_m(8);
	cout<<"\np = "<<p->get_t()<<"/"<<p->get_m();
	
//	ps p(4,6);
//	ps q(5);
//	ps r;				
//				Day la vd ham mau
//	cout<<"p = "; p.xuat();
//	cout<<"\nq = "; q.xuat();
//	cout<<"\nr = "; r.xuat();
	

}

