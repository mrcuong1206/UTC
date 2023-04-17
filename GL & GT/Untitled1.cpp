#include<bits/stdc++.h>
using namespace std;
void sx(int *a, int n, bool tang = 1)
	{
		for(int i = 0; i< n;i++)
		for(int j=i+1;j<n;j++)
			if(a[i]>a[j]==tang)
				swap(a[i],a[j]);
	}
int main(){
	
}

