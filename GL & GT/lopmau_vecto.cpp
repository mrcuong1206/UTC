#include<bits/stdc++.h>
using namespace std;
template <class T> class vecto{
	int n;
	float *Tp;
	public:
		friend istream &operator >>(istream &is,vecto &a){
			do{
			   cout << "Nhap so chieu > 0 : "; 
			   is >> a.n;
			  }while(a.n <0);
			   a.Tp=new float[a.n+5];
			   for(int i=0;i<a.n;i++){
			    is>>a.Tp[i];
    		  }
			return is;
		}	 
		friend ostream &operator <<(ostream &os,vecto a){
			os << "{" << setprecision(2) << fixed << a.Tp[0];
			for(int i = 1; i < a.n; i++)
			{
			os << "," << setprecision(2) << fixed << a.Tp[i];
			}
			os << "}";
			return os;
		}
		
		friend vecto operator + (vecto a, vecto b){
			vecto c;
			int max=a.n>b.n?a.n:b.n;
			int min=a.n<b.n?a.n:b.n;
			c.n=max;
			c.Tp = new float [max+1];
			for(int i=0;i<min;i++)
				c.Tp[i]=a.Tp[i]+b.Tp[i];
			for(int i=min;i<max;i++)
				c.Tp[i]=a.n>b.n?a.Tp[i]:b.Tp[i];
			return c;
		}
	
		friend float operator * (vecto a,vecto b){
			float S=0;
			int min = (a.n < b.n) ? a.n : b.n;
			for(int i = 0; i < min; i++)
			{
		 		S+= a.Tp[i] * b.Tp[i];
			}
			return S;
		}
		
		friend vecto operator * (float x,vecto a){
			vecto d;
			d.n = a.n;
			d.Tp = new float[d.n + 5];
			for(int i = 0; i < a.n; i++)
			{
			d.Tp[i] = x*a.Tp[i];
			}
			return d;
		}
};
int main(){
	vecto<float> a,b;
	cin>>a>>b;
	cout<<a<<"\n"<<b<<"\n";
	cout<<a+b<<"\n";
	cout<<"Tich vo huong hai vecto: "<<operator *(a,b)<<"\n";
	float x;
	cout<<"nhap x:";
	cin>>x;	cout<<"x*a:"<<x*a;
	
	
}
	
	



