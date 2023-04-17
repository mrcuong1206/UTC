//bien cau truc tu tro
//chua hoan thanh
#include<bits/stdc++.h>
using namespace std;

struct person {
	string ten;
	int tuoi;
	person *bo, *me;
};
int main(){
	person A, B;
	A.ten="Johnson"; A.tuoi=13; A.bo=A.me=NULL;
	B.ten="Mick"; B.tuoi=17; B.bo=&A; B.me=NULL;
	cout<<<"Bo cua B la: "<< B.bo->ten;
}

