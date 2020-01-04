#include<stdio.h>
int main(){
	int a,b,c,d,e,f;
	scanf("%d",&a);
	c=a%10;
	d=a/10;
	e=d%10;
	f=d/10;
	printf("%d\n%d\n%d\n",f,e,c);
	return 0;
}
