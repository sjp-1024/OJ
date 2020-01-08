#include<stdio.h>
int main(){
	int n,i,x;
	int sum=1;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&x);
        sum=sum*x;
		
	}
	if(x==0)
		sum=0;
	printf("%d",sum);
	return 0;
}
