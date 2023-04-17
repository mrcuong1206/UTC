//danh sach lien ket don
//chua hoan thien
#include<bits/stdc++.h>

struct node{
	int elem;
	node *next;
	node(int x=0,node *N=0){elem=x;next=N;}//ham tao
};

void addfirst(node *&H, int x)
{
	H=new node(x, H);
}
void addlast(node *&H, int x)
{
	if(!H) H=new node(x);
	else {
		node *p=H;
		while(p->next) p=p->next; // end while thi p->last
		p->next=new node(x);
	}
}
void travel(node *H){
	for(node *p=&D;p!=NULL;p=p->next) cout<<p->elem<<" ";
}
using namespace std;
int main(){
	node *H=0;
}

