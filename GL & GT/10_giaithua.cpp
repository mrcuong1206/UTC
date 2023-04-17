//tinh giai thua so lon n =1000!
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	vector<int> V(1,1); // 1 so 1, truoc la so, sau la gtri
	cin>>n;
	while(n>1)
	{
		int m=0;
		for(auto &v:V)// & vua doc vua ghi
		{
			m+=v*n;
			v=m%10;	// phan du
			m/=10;	// phan nho
		}
		while(m){
			V.push_back(m%10);
			m/=10;
		}
		n--;
	}
//DUYET bo lap nguoc
//	for(auto it=V.rbegin();it!=V.rend();it++)
//	cout<<*it;
	reverse(V.begin(), V.end());	
	for(auto v:V) cout<<v;		
}

