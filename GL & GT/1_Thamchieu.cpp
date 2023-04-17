//Tham chieu &
#include<bits/stdc++.h>
using namespace std;
int main(){
	int x=1232131;	//x dat ten cho dia chi 1 vung nho tren RAM
//	printf("Dia chi cua x : %x",&x);	printf("\nGia tri cua x : %d",x);	
	cout<<"\nDia chi x : "<<&x;
	cout<<"\nGia thi x : "<<x;
	int &y=x;	// y la bi danh cua x
	cout<<"\nDia chi y : "<<&y;
	cout<<"\nGia thi y : "<<y;
	
	int &z=y;
	z++; // tang x
	cout<<"\nGia tri cua z :"<<z;
	cout<<"\nDia tri cua z :"<<&z;
	
}

