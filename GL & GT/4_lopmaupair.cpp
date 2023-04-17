//cho day diem, tinh do dai duong gap khuc di qua day diem
#include<bits/stdc++.h>
using namespace std;

double kc(pair<double,double> A,pair<double,double>)

int main(){
	pair<double, double> A[1000];
	int n;
	cout<<"Nhap so diem: \n";
	cin>>n;
	for(int i=1;i<=n;i++) cin>>A[i].first>>A[i].second;
		A[n+1]=A[1];
	double s=0;
	for()	s+=kc(A[i], A[i+1]);
	cout<<"DGK: \n"<<s;
}

