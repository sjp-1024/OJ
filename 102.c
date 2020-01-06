#include<stdio.h>
int main(){
	float a,b,c,t;
	float x,y,z,f;
	scanf("%f %f %f %f",&a,&b,&c,&t);
	x=1/a+1/b;
	y=x*t;
	z=1-y;
	f=z/(x-1/c);
	f=f+t;
	printf("%.2f",f);
	return 0;
}
