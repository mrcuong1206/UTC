#include<bits/stdc++.h>
using namespace std;

template <class T1, class T2>
class PAIR{
	T1 first;
	T2 second;
	public:
		PAIR(T1 u, T2 v){	//ham tao
			first = u;
			second = v;
		}
		T1 getmax(){	 //T2 = 3.14
			return first >second?first:second;
		}
};

int main(){
	PAIR<int, double> p(2,3.14);
	cout<<"Max \n"<<p.getmax();
}

