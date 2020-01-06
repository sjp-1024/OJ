#include<stdio.h>
#include<string.h>
int main(){
	char a,t,r;
	float m,n;
	scanf("%c\n%f %f",&a,&m,&n);
if (a=='r'){
	printf("%.2f",m*n);}
else if(a=='t'){
	printf("%.2f",m*n/2);}
return 0;
}


