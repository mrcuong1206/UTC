//Tim so fibonacci la  day thu n
//1 1 2 3 5 8 13
//F[0]=F[1]; F[n]=F[n-1]+F[n-2]
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; 	//1
	cin>>n;	//1
	long long F[n+1]={1,1};	//1+1+2+2    //F[0]=1 -> 2
	for(int i=2;i<=n;i++)	//2+9(N-1)+1
		F[i]=F[i-1]+F[i-2];
	cout<<F[n];		//2
}
//Do phuc tap khong gian K(n)=sizeof(n)+sizeof(F)+sizeof(i)=4+(n+1)*16+4
//Do phuc tap  thoi gian T(n)=2+6+9n-6+2 = 9n+4;
