#include<bits/stdc++.h>
using namespace std;

enum sick{ A=0, B=1, C=2 };

istream&operator>>(istream &is, sick &x){
	string benh;
	is>>benh;
	if(benh == "A")		x = A;	
	if(benh == "B")		x = B;
	if(benh == "C")		x = C;
	return is;
}


ostream&operator<<(ostream &os, sick s){
	if(s == A) os<<"A";
	if(s == B) os<<"B";
	if(s == C) os<<"C";
	return os;
}


class benhnhan{
	string ten;
	int tuoi;
	sick benh;
	public:
		string get_ten(){return ten;}
		sick get_benh(){return benh;}
		int get_tuoi(){return tuoi;}
		friend ostream &operator<<(ostream &os, benhnhan s)
		{	
			os<<setw(30)<<left<<s.ten<<"||"<<s.tuoi<<"\t"<<"||"<<s.benh;
			return os;
		}
		friend istream &operator>>(istream &is, benhnhan &s)
		{
			getline(is,s.ten);
			is>>s.tuoi>>s.benh;
			return is;
		}	
};


	string cut(string x){
		string t[20];
		int i = 0;
		istringstream is(x);
		while(is>>t[i]){
			i++;
		}
		return t[i-1];
	}


bool sapxepTen(benhnhan u, benhnhan v){
	string u1 = cut(u.get_ten()), v1 = cut(v.get_ten());
	if(u1 == v1) return u.get_ten() < v.get_ten();
	return u1 < v1;
}


class bn{
	int n;
		benhnhan *A;
	public:
		bn(){
			n=0; A=NULL;
		}
		~bn(){
			if(A) delete[]A;
		}
		void nhap(string fn){
			ifstream fin(fn);
			fin>>n;
			A = new benhnhan[n];
			for(int i = 0; i < n; i++){
				fin.ignore(1);
				fin>>A[i];
			}
			fin.close();
		}
		void sx(){
			sort(A,A+n,sapxepTen);
		}
		void xuat(){
			for(int i = 0; i < n; i++){
				cout<<A[i]<<"\n";
			}
		}
		
				
void tuoiTB(){
	int demA = 0, demB = 0, demC = 0, maxA = A[0].get_tuoi(), maxB = A[0].get_tuoi(), maxC = A[0].get_tuoi();
	double sumA = 0, sumB = 0, sumC = 0;
		for(int i = 0; i < n; i++)
		{
			if(A[i].get_benh() == 0){
				demA++;
				sumA += A[i].get_tuoi();
			}	
			if(maxA < A[i].get_tuoi()){
				maxA = A[i].get_tuoi();
			}		
		}
		if(demA == 0){
			cout<<"Khum co ai mac benh B !!"<<endl;
		}
		else{
			cout<<"\nTuoi trung binh cua benh A la: "<< sumA/demA  <<endl;
			cout<<"Benh nhan mac benh A co tuoi lon nhat la: "<< maxA <<endl;
			cout<<"\n";
		}	
		for(int i = 0; i < n; i++)
		{
			if(A[i].get_benh() == 1){
				demB++;
				sumB += A[i].get_tuoi();
			}	
			if(maxB < A[i].get_tuoi()){
				maxB = A[i].get_tuoi();
				}
		}	
		if(demB == 0){
			cout<<"Khum co ai mac benh B !!"<< endl;
		}
		else{
			cout<<"Tuoi trung binh cua benh B la: "<< sumB/demB <<"\n";
			cout<<"Benh nhan mac benh B co tuoi lon nhat la: "<< maxB <<"\n";
			cout<<"\n";
		}	
		for(int i=0;i<n;i++)
		{
			if(A[i].get_benh() == 2){
				demC++;
				sumC += A[i].get_tuoi();
			}
			if(maxC < A[i].get_tuoi()){
				maxC = A[i].get_tuoi();
			}
		}
		if(demC == 0){
				cout<<"Khum co ai mac benh C !!"<<endl;
			}
			else{
				cout<<"Tuoi trung binh cua benh C la: "<< sumC/demC <<"\n";
				cout<<"Benh nhan mac benh C co tuoi lon nhat la: "<< maxC <<"\n";
			}
		}	
};
int main(){
	bn B;
	B.nhap("benhNhan_btvn.txt");
	cout<<"Danh sach benh nhan: "<<"\n\n";	B.xuat();
	B.sx(); 
	cout<<"\nDanh sach sau khi : "<<"\n";	B.xuat();
	B.tuoiTB();	
	
}

