#include<stdio.h>
int main()
{
	 int n,sum,count;
	 sum=0;
	 count=0;
	 printf("Input an integer:");
	 scanf("%d",&n);
	 while(1)
		 {
			  count++;
			  sum=sum+n%10;
			  n=n/10;
			  if(n==0)
				  {
					   break;
					  }
			 }
	 printf("count=%d,sum=%d",count,sum);
	 return 0;
}


