// Tach nhom
#include<bits/stdc++.h>
using namespace std;

int tachnhom(int n)
{
	if(n<=4 or n%2) return 1;	// 1 thay cho n va +n o duoi ==> cong tat ca lai.
	return tachnhom(n/2-2)+tachnhom(n/2+2)+n; // cong thuc dg con chua hieu, p28
}

int main(){
	cout<<tachnhom(60);
}

