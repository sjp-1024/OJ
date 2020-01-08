#include<stdio.h>
#include<math.h>
int main(){
	int n,i,j,t;
	int  m;
	int a[n];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[101]);
	for(i=0;i<n-1;i++)
      if(a[i]>a[i+1]){
		 t=a[i];
		 a[i]=a[i+1];
		 a[i+1]=t;
	  }
	m=a[n-1]-a[0];
	printf("%d",m);
	return 0;
}
