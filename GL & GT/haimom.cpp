#include<bits/stdc++.h>
using namespace std;

enum covid{
	A=1,B=2,C=3
};

ostream & operator<<(ostream &os, covid s){
	if(s == A) os<<"A";
	if(s == B) os<<"B";
	if(s == C) os<<"C";
	return os;
}
istream & operator>>(istream &is, covid &c){
	string benh;
	is>>benh;
	if(benh == "A")
		c = A;
	if(benh == "B")
		c = B;
	if(benh == "C")
		c = C;
	return is;
}
class bnhan{
	string ten;
	int tuoi;
	covid benh;
	public:
		string getten(){
		return ten;
		}
		covid getbenh(){
		return benh;
		}
		int gettuoi(){
		return tuoi;
		}
		friend ostream &operator<<(ostream &os, bnhan s){
		os<<setw(25)<<left<<s.ten<<"||"<<s.tuoi<<"\t"<<s.benh;
		return os;
		}
		friend istream &operator>>(istream &is, bnhan &s){
		getline(is,s.ten);
		is>>s.tuoi>>s.benh;
		return is;
		}	
};
string cut(string x){
	string t[10];
	int i = 0;
	istringstream is(x);
	while(is>>t[i]){
		i++;
	}
	return t[i - 1];
}
bool sap_xep(bnhan n, bnhan m){
	string n1 = cut(n.getten()), m1 = cut(m.getten());
	if(n1 == m1) return n.getten() < m.getten();
	return n1 < m1;
}
class bn{
	int n;
	bnhan *A;
	public:
		bn(){
			n = 0; A = NULL;
		}
		~bn(){
			if(A) delete[]A;
		}
		void nhap(string fn){
			ifstream fin(fn);
			fin>>n;
			A = new bnhan[n];
			for(int i = 0; i < n; i++){
			fin.ignore(1);
			fin>>A[i];
			}
			fin.close();
		}
		void sapxep(){
			sort(A,A + n,sap_xep);
		}
		void xuat(){
			for(int i = 0; i < n; i++){
			cout<<A[i]<<"\n";
			}
		}
		void tuoitrungbinh(){
			int dA = 0, dB = 0, dC = 0, maxA = A[0].gettuoi(), maxB = A[0].gettuoi(), maxC = A[0].gettuoi();
			float sA = 0, sB = 0, sC = 0;
			for(int i = 0; i < n; i++){
			if(A[i].getbenh() == 1){	
				dA++;
				sA = sA + A[i].gettuoi();
			if(maxA < A[i].gettuoi()){
				maxA = A[i].gettuoi();
				}
			}
			}
			if(dA == 0){
				cout<<"Khong co benh nhan nao mac benh "<<endl;
			}
			else{
				cout<<"Tuoi TB cua benh A la: "<<sA/dA<<endl;
				cout<<"Benh nhan co benh A co tuoi lon nhat la: "<<maxA<<endl;
				cout<<"\n";
			}
			
			for(int i = 0; i < n; i++){
				if(A[i].getbenh() == 2){
					dB++;
					sB = sB + A[i].gettuoi();
					if(maxB < A[i].gettuoi()){
						maxB = A[i].gettuoi();
						}
					}
				}
				if(dB == 0){
					cout<<"Khong co benh nhan nao mac benh"<<endl;
				}
				else{
					cout<<"Tuoi TB cua benh B la: "<<sB/dB<<endl;
					cout<<"Benh nhan co benh B co tuoi lon nhat la: "<<maxB<<endl;
					cout<<"\n";
				}
				
				for(int i = 0; i < n; i++){
				if(A[i].getbenh() == 3){
					dC++;
					sC = sC + A[i].gettuoi();
					if(maxC < A[i].gettuoi()){
						maxC = A[i].gettuoi();
						}
					}
				}
				if(dC == 0){
					cout<<"Khong co benh nhan nao mac benh "<<endl;
				}
				else{
					cout<<"Tuoi TB cua benh C la: "<<sC/dC<<endl;
					cout<<"Benh nhan co benh C co tuoi lon nhat la: "<<maxC<<endl;
				}
				}	
};
int main(){
	bn N;
	N.nhap("bn.txt");
	cout<<"\nDanh sach cac benh nhan: "<<endl; N.xuat();
	N.sapxep(); 
	cout<<"\n\nDanh sach cac benh nhan sau khi sap xep: "<<endl; 
	N.xuat();
	N.tuoitrungbinh();	
}
