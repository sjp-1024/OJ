#include<stdio.h>
#include<stdlib.h>
int main()
{
    int y,m,d;
	int e=0;
	scanf("%d %d",&y,&m);
	if((y%4==0)&&(y%100!=0)||(y%400==0))
		e=1;
	if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
		d=31;
	if(m==4||m==6||m==9||m==11)
		d=30;
	if(e==1&&m==2)
		d=29;
	if(e==0&&m==2)
		d=28;
	printf("%d",d);
	return 0;
}
