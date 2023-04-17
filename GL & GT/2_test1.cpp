#include<bits/stdc++.h>
using namespace std;

int fun(int a=3, int b=7)
{
	return a+b;
}

int main(){
	cout<<fun(4+5, 6) << "\n"; // 15
	cout<<fun(2)<<"\n";			// 2+7=9
	cout<<fun();				// 3+7=10
	
}

