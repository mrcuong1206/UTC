//caidat stack bang dslk don
#include<bits/stdc++.h>
//chua hoan thien
using namespace std;

template <class T>
struct node{
	T elmem;
	node *next;
	node(T x, node *N=0){elem=x;next=N;	}
};

template <class T>
class STACK
{
	*H; //H quan li dau ds moc noi
	int n;	// so phan tu hien tai trong stack
	public:
		STACK(){n=0;H=NULL; }
		size() {return n;}
		bool empty(){retrun n==0;}
		void pop(); {n--;H=H->next;}
		void push(T x) {n++; H
		}
		T &top(); // doc va ghi, k ghi thi` bo &
		{
			return H->elem;
		}
}
int main(){

}

