//Xau ki tu 
#include<bits/stdc++.h>
using namespace std;
char viethoa(char c)
{
	if(c>='a' and c<='z') return c=c-'a'+'A';
}
int main(){
	char x[30] = "hom nay dep troi";	//dung mang ki tu de bieu dien xau trong C
	//x[6]='\0'; // dau het xau
		printf("Nhap xau : "); 
		fflush(stdin);
		scanf("%[^0-9]",x);
	// for(int i=0;i<strlen(x);i++) x[i]=viethoa(x[i]);
	for(char *p=x;*p!=0;p++) *p=viethoa(*p);
		printf("%s", x);
}

