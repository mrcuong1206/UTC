#include <iostream>
#ifndef __stack__cpp__
#define __stack__cpp__
using namespace std;

template <class T>
class Stack {
		int n,cap;
		T *buff;
	public:
		Stack() {
			n=cap=0;
			buff=0;
		}
		~Stack() {
			if(buff) delete[]buff;
		}
		void push(T x) {
			if(n==cap) {
				cap=cap*2+1;
				T *tem=new T[cap];
				for(int i=0; i<n; i++) tem[i]=buff[i];
				if(buff) delete[]buff;
				buff=tem;
			}
			buff[n++]=x;
		}
		void pop() {
			n--;
		}
		int size() {
			return n;
		}
		bool empty() {
			return n==0;
		}
		T &top() {
			return buff[n-1];
		}
};
#endif

int main() {
    char num[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    Stack <char> S;
     
    int coSo, so, du;
     // Nhap
    cout << "Nhap so can chuyen: ";
    cin >> so;
    cout << "Nhap co so can chuyen: ";
    cin >> coSo;
     
    // Chuyen doi
    while(so) {
        du = so % coSo;
        S.push(num[du]);
        so /= coSo;
    }
     
    // Xuat 
    while(!S.empty()) {
        cout << S.top();
        S.pop();
    }
     
    return 0;
}

