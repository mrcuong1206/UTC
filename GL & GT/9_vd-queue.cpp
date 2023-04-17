// Last end front first
//VD ve queue
#include<bits/stdc++.h>
#include<queue>
using namespace std;
int main(){
	queue<int> Q;
	for(auto x:{3,7,2,1})	Q.push(x);
	
	cout<<"Queue: ";
	while(not Q.empty())
	{
		cout<<Q.front()<<" ";
		Q.pop();
	}
}
//done

