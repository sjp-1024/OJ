#include<stdio.h>
int main(){
	int n,sum;
	sum=0;
	scanf("%d",&n);
	while(1)
	{
		sum=sum+n%10;
		n=n/10;
		if(n==0)
		{
			break;
		}
	}
	printf("%d %d",sum);
	return 0;
}
