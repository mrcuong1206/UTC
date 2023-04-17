//Cau truc sinh vien
#include<bits/stdc++.h>
using namespace std;
enum gender{Nu,Nam}; // kieu liet ke
//#define Nu 0
//#define Nam 1
struct sv
{
	string ten;
	int tuoi,diem;
	gender gioi;
};
void nhap(int &n,sv *&a)	// cap phat dong cho mang a, them & cho ca 2
{
	cout<<"Nhap so sv "; cin>>n;
	a=new sv[n+5];  //cap phat bo nho dong trong C++
	for(int i=1;i<=n;i++)
	{
		cout<<"Thong tin sv "<<i<<"\n";
		cout<<"Ho ten "; fflush(stdin); getline(cin,a[i].ten);
		cout<<"Tuoi "; cin>>a[i].tuoi;
		cout<<"Diem "; cin>>a[i].diem;
		cout<<"Gioi ";
		string t;
		cin>>t;
		a[i].gioi=t=="Nu"?Nu:Nam;
	}
}
void xuat(int n,sv *a)
{
	for(int i=1;i<=n;i++)
	{
		cout<<setw(30)<<left<<a[i].ten<<" || "<<setw(6)<<a[i].tuoi<<" || "<<setw(6)<<a[i].diem<<" || ";
		cout<<(a[i].gioi==0?"Nu":"Nam")<<endl;
	}
}
double dtb(int n,sv *a,gender s)
{
	double d=0,t=0;
	for(int i=1;i<=n;i++) if(a[i].gioi==s) {d++;t+=a[i].diem;}
	return t/(d?d:1);
}
void sx(int n,sv *a) // sx diem or tuoi or Ten
{
	for(int i=1;i<=n;i++)
	for(int j=i+1;j<=n;j++)
	if(a[i].diem>a[j].diem) swap(a[i],a[j]);
}
main()
{
	int n;
	sv *a;
	nhap(n,a);
	cout<<"\nDanh sach sv \n";
	xuat(n,a);
	double dtbnam=dtb(n,a,Nam);
	double dtbnu=dtb(n,a,Nu);
	if(dtbnam==dtbnu) cout<<"Diem tb bang nhau";
	else cout<<(dtbnam>dtbnu?"Diem tb nam lon hon nu":"Diem tb nu lon hon nam");
	cout<<"\nDanh sach sau khi sx \n"; sx(n,a); xuat(n,a);
}
