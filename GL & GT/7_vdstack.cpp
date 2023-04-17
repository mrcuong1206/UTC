//ngan xep - stack
#include<bits/stdc++.h>
#include<stack>
// satck dung san trong STL = standard template Lib
using namespace std;

int main(){
	stack <int> S; // khai bao 1 stack rong~ chua cac ptu kieu int
	for(int x:{4, 7, 3, 8, 1, 6})	
		S.push(x);		//Xep do vao`
//	S.top() = 9 		//--> 9 1 8 2 7 4
	while(not S.empty()){	//ktra xem no co rong hay khong.
		cout<<S.top()<<" ";	//tra ve gtri phan tu dinh cua stack.
		S.pop();			//Lay ra k tra ve gia tri
	}
	
}

