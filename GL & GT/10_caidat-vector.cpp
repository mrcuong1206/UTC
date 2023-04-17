//cai dat vector
#include<bits/stdc++.h>
using namespace std;

template <class T>
class Vector
{
	T *buf
	int n, cap;
	void extend(int newcap)	// bi day -> them vao
	{
		cap=newcap;
		T *team=new T[cap];
		for(int i=0;i<n;i++)
			tem[i]= buf[i];
			if(buf) delete []buf;
			buf=tem;
	}
	public:
		Vector(){
			buf=0;n=cap=0;
		}
		Vector(int m, t x){
			n=cap=m;
			buf=new T[n];
			for(int i = 0;i<n;i++)
				buf[i]=x;
		}
		~Vector(){
			if(buf) delete[]buf;
		}
		void clear(){ n=0; }
		int size(){return n;}
		int capacity(){return cap;}
		bool empty(){return n==0;}
		T &front(){return buf[0];}
	???	T &back(){ return buf[n-1];}
		operator[](int k){buf[k];}
		void push_back(T x)
		{
			if(n==cap) extend(cap?cap*2:1);
			buf[n++]=x;
		}
		void pop_back(){n--;}
//		begin()
//		end()
//		insert();
//		erase();
//		rback();
//		rend();
		
}

int main(){

}

