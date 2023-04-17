// Quan li sinh vien
#include<bits/stdc++.h>
using namespace std;
enum gender{Nu=0,Nam=1};
istream &operator>>(istream &is, gender &g)
{
	string gt;
	is>>gt;
	for(char &c:gt)	c=toupper(c);
	if(gt=="NU")	g=Nu;
	else g=Nam;
	return is;
}
ostream&operator<<(ostream &os, gender s)
{
	os<<(s==Nu?"Nu":"Nam");
	return os;
}
class sv {
	string ten;
	int tuoi, diem;
	gender gt;
	public:
//		sv();
		friend ostream&operator<<(ostream &os, sv s)
		{
			os<<setw(30)<<left<<s.ten<<"||"<<s.tuoi<<"||"<<s.diem<<"||"<<s.gt;
		}
		friend istream&operator>>(istream &is, sv &s)
		{
			getline(is,s.ten);
			is>>s.tuoi>>s.diem>>s.gt;
			return is;
			
		}
};
class lophoc {
	int n;
	sv *A;
	
	public:
		lophoc(){n=0;A=NULL;}
		~lophoc() {
			if(A)	delete[]A;
		}
		void nhap(string fn)
		{
			ifstream fin(fn);
			fin>>n;	
			A=new sv[n];
			for(int i=1;i<=n;i++)
			{
				fin.ignore(1);
				fin>>A[i];
			}	
			
			fin.close();	
		}
		void xuat()
		{
			for(int i=1;i<=n;i++)	
			cout<<A[i]<<"\n";
		}
};
int main(){
	lophoc C;
	C.nhap("sinhvien.txt");
	cout<<"\nDanh sach sinh vien: \n";
	C.xuat();
}

