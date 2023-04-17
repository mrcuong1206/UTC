//ham co doi la ham
#include<bits/stdc++.h>
using namespace std;

//sap xep chan truoc, le sau va tang dan
bool ss(int a, int b)
{
	if(a%2==b%2) return a<b;//tang dan 		// <,< : chan truoc, le sau va tang dan
	return a%2<b%2;	// chan truoc			// >,> : le truoc, chan sau va giam dan
											// <,> : le truoc, chan sau va tang dan
											// >,< : chan truoc, le sau va giam dan
}

//sx giam dan
bool cmp(int a, int b){		
	return a>b;		
}
void sapxep(int *a, int n, bool f(int, int))
{
	for(int i=0;i<n;i++)
	for(int j=i+1;j<n;j++)
	if(f(a[j], a[i]))	swap(a[i],a[j]);
}
int main(){
	
	int a[]={42,543,54,776,869,91,520,58,112}, n=sizeof(a)/sizeof(int);
	//day chan le
	sapxep(a,n,ss);
	cout<<"\nDay chan le: "; 
	for(auto x:a)	
	cout<<x<<" ";
	//sx giam dan
	sapxep(a,n,cmp);
	cout<<"\nDay giam: ";
	for(auto x:a)
	cout<<x<<" ";
}

