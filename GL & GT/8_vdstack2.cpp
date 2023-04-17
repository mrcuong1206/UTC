#include<bits/stdc++.h>
using namespace std;
struct person {
	string name;
	int age;
	person(string n="", int a=0){name=n;age=a;}
};
int main(){
	stack<person> S;
	S.push(person("chi pheo",15));
	S.push(person("chi no",18));
	S.push(person("chi hac",45));
	
	while(S.size()){
		cout<<S.top().name << " " <<S.top().age<<"\n";
		S.pop();
	}
}

