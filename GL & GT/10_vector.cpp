#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[]={4,7,2,8,1,6,9,3,5,2,6,3};
	vector<int> V(a+2,a+7);
	cout<<"\nsize    : "<<V.size();
	cout<<"\ncapacity: "<<V.capacity();
	V.push_back(8);
	V.front()=2;
	cout<<"\nfront : "<<V.front();
	cout<<"\nback  : "<<V.back();
	cout<<"\nsize    : "<<V.size();
	cout<<"\ncapacity: "<<V.capacity();
	V.pop_back();
	cout<<"\nVector : "; for(int i=0;i<V.size();i++) cout<<V[i]<<" ";
	V.resize(10,6);
	cout<<"\nVector : "; for(int i=0;i<V.size();i++) cout<<V[i]<<" ";
	cout<<"\ncapacity: "<<V.capacity();
	sort(V.begin(),V.end());
	cout<<"\nVector : "; for(vector<int>::iterator it=V.begin();it!=V.end();it++) cout<<*it<<" ";
	V.push_back(5);
	cout<<"\nDao : "; for(vector<int>::reverse_iterator it=V.rbegin();it!=V.rend();it++) cout<<*it<<" ";
	cout<<"\nDuyet : "; for(auto x:V) cout<<x<<" ";
	auto it=V.begin(); it++;it++; *it=0;
	cout<<"\nDuyet : "; for(auto x:V) cout<<x<<" ";
	V.insert(it,7);
	cout<<"\nDuyet : "; for(auto x:V) cout<<x<<" ";
	it++;
	V.erase(it);
	cout<<"\nDuyet : "; for(auto x:V) cout<<x<<" ";
}
