#include<bits/stdc++.h>
//nhap vao te cua 1 nguoi va xuat ra ten nguoi do
// in ra tuoi tung nguoi
// in ra so nguoi tung nam sinh
using namespace std;

class Nguoi{
	private:
		string ten;
		int namsinh, tuoi;
	public:
		void getTen(){
			cout<<"Nhap ten: ";
			getline(cin, ten);
			cout<<"Nhap nam sinh: ";
			cin>>namsinh;
			
		}
		void setTen(){
			cout<<"Ban "<<ten<<" sinh nam: "<<namsinh<<endl;
			
		}
		
};
int main(){
	
	Nguoi NVA;
	NVA.getTen();
	NVA.setTen();

}

