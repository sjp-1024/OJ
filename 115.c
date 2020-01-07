#include<stdio.h>
int main(){
	int x,y;
	int b,c;
	scanf("%d %d",&x,&y);
	b=x%10;
	c=x/10;
	if(x==y)
		printf("100");
	else if((y==10*b+c)||(y==10*c+b))
		printf("20");
	else if(((y%10)==b)||((y%10)==c))
		printf("2");
	else if (((y/10)==b)||((y/10)==c))
		printf("2");
	else 
		printf("0");
	return 0;
}

