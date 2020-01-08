#include<stdio.h>
int main()
{   int n,i;
 double a[100],sum=0;
	scanf("%d",&n);
		for(i=0;i<n;i++)scanf("%lf",&a[i]);
		for(i=0;i<n;i++)sum=sum+a[i];
		 printf("%.2f",sum/n);
			return 0;
}


