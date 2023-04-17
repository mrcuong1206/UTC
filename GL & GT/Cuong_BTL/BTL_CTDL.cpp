#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;

class khachHang
{
	public:
	string hoten;
	long int sdt;
	friend void doc_file_KH(ifstream &filein,khachHang &kh)
	{
		getline(filein, kh.hoten,';');
		filein>>kh.sdt;
	}
	friend void doc_file_1(ifstream &filein,vector<khachHang> &ds_kh,int &nkh)
	{
		while(filein.eof()==false)
		{
			khachHang kh;
			doc_file_KH(filein,kh);
			ds_kh.push_back(kh);
		}
		nkh=ds_kh.size()-1;
	}
};

class cuocGoi
{
	public:
	long int sdt;
	int sophut;
	string thoidiembatdaugoi;
	string tgian;
	string vung;
	friend void doc_file_CG(ifstream &filein,cuocGoi &cg)
	{
		filein>>cg.sdt;	
		filein>>cg.sophut;
		getline(filein, cg.thoidiembatdaugoi,';');
		getline(filein, cg.tgian,';');
		getline(filein, cg.vung);
	}
	friend void doc_file_2(ifstream &filein,vector<cuocGoi> &ds_cg,int &ncg)
	{
	while(filein.eof()==false)
		{
		cuocGoi cg;
		doc_file_CG(filein,cg);
		ds_cg.push_back(cg);
		}
		ncg=ds_cg.size()-1;
	}

};

void Ghi_KH(ofstream &fileout,khachHang kh,int tienTong,int d1,int d2,int d3,int d4) // ghi thong tin toi cac file do
{
	fileout<<kh.hoten<<"; "<<"0"<<kh.sdt<<"; "<<tienTong<<", "<<d1<<", "<<d2<<", "<<d3<<", "<<d4<<"\n";
}

void Ghi_vao_file(ofstream &fileout,vector<khachHang> ds_kh,int nkh,int *tienTong,int **dem)
{
	for(int i=0;i<nkh;i++)
	{
		Ghi_KH(fileout,ds_kh[i],tienTong[i],dem[i+1][1],dem[i+1][2],dem[i+1][3],dem[i+1][4]);
	}
}

int nam_nhuan(int y)
{ 
	if(y%400==0) return 1;
 	if(y%100==0) return 0;
	if(y%4==0) return 1;
 	return 0;
}

int soNgay(int d,int m,int y)
{
 	int t[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
 	for(int i=1;i<m;i++)
 	d+=t[i];
 	if(nam_nhuan(y)&&m>2)d++;
 	return d;
} 

int tinhThu(string s)
{
	int l1 = s.length();
    int tg = 0;
    tg += (int)(s[10] - '0') * pow(10, l1-8-2);
    tg += (int)(s[8] - '0') * pow(10, l1-7-2);
    tg += (int)(s[8] - '0') * pow(10, l1-6-2);
    tg += (int)(s[7] - '0') * pow(10, l1-5-2);
    tg += (int)(s[5] - '0') * pow(10, l1-4-2);
    tg += (int)(s[4] - '0') * pow(10, l1-3-2);
    tg += (int)(s[2] - '0') * pow(10, l1-2-2);
    tg += (int)(s[1] - '0') * pow(10, l1-1-2);
	int d,m,y;
	d= tg/1000000;
	m= (tg%1000000)/10000;
	y= (tg%1000000)%10000;
	int K=0;
 	for(int i=2021;i<y;i++)
 	K+= 365+nam_nhuan(i);
 	K=K-soNgay(18,11,2021)+soNgay(d,m,y);
    int thu=(70000+K)%7;
    return thu;
}
void tinhTien(vector<cuocGoi> ds_cg,vector<khachHang> ds_kh,int nkh,int ncg,int *tienTong)
{
	int *Tien;
	Tien=new int [ncg];
	for(int i=0;i<ncg;i++)
	{
		Tien[i]=0;
	}
	for(int i=0;i<ncg;i++)
	{
		if(ds_cg[i].vung==" NH") Tien[i]=1100*ds_cg[i].sophut*1;
		if(ds_cg[i].vung==" LC") Tien[i]=1100*ds_cg[i].sophut*2;
		if(ds_cg[i].vung==" X") Tien[i]=1100*ds_cg[i].sophut*3;
		if(ds_cg[i].vung==" RX") Tien[i]=1100*ds_cg[i].sophut*4;
	}
	for(int i=0;i<ncg;i++)
	{
		if((ds_cg[i].thoidiembatdaugoi[1]==50&&ds_cg[i].thoidiembatdaugoi[2]==51)||(ds_cg[i].thoidiembatdaugoi[1]==48&&ds_cg[i].thoidiembatdaugoi[2]<53))
		Tien[i]=Tien[i]*0.7;
	}	
		int *thu;
		thu=new int[ncg+1];
	for(int i=0;i<ncg;i++)
	{
		thu[i]=tinhThu(ds_cg[i].tgian);
	}
	for(int i=0;i<ncg;i++)
	{
		if(thu[i]==0||thu[i]==4) Tien[i]=Tien[i]*0.7;
	}
	for(int i=0;i<nkh;i++)
	{
		tienTong[i]=0;
	}
	for(int i=0;i<nkh;i++)
	{
		for(int j=0;j<ncg;j++)
		if(ds_cg[j].sdt==ds_kh[i].sdt) tienTong[i]+=Tien[j];
	}
}

void demso(vector<cuocGoi> ds_cg,vector<khachHang> ds_kh,int nkh,int ncg,int **dem)
{
	for(int i=1;i<=nkh;i++)
	for(int j=1;j<=4;j++)
	{
		dem[i][j]=0;
	}
	for(int i=1;i<=nkh;i++)
	for(int j=1;j<=ncg;j++)
	{
		if(ds_kh[i-1].sdt==ds_cg[j-1].sdt)
		{
			if(ds_cg[j-1].vung==" NH") dem[i][1]++;
			if(ds_cg[j-1].vung==" LC") dem[i][2]++;
			if(ds_cg[j-1].vung==" X") dem[i][3]++;
			if(ds_cg[j-1].vung==" RX") dem[i][4]++;
		}
	}
}
int main()
{
	int nkh,ncg;
	ifstream filein1;
	ifstream filein2;
	
	filein1.open("khachhang.txt",ios_base::in);
	vector<khachHang> ds_kh;
	doc_file_1(filein1,ds_kh,nkh);
	filein1.close();
	
	filein2.open("cuocgoi.txt",ios_base::in);
	vector<cuocGoi> ds_cg;
	doc_file_2(filein2,ds_cg,ncg);
	filein2.close();
	
	int *tienTong;
	tienTong=new int [nkh];
	tinhTien(ds_cg,ds_kh,nkh,ncg,tienTong);
	
	int **dem;
	dem=new int *[nkh];
	for(int i=1;i<=nkh;i++)
	dem[i]=new int[4];
	demso(ds_cg,ds_kh,nkh,ncg,dem);
	
	ofstream fileout;
	fileout.open("ketqua.txt",ios_base::out);
	Ghi_vao_file(fileout,ds_kh,nkh,tienTong,dem);
	fileout.close();
	system("pause");
	return 0;
}

