#include<stdio.h>
#include<string.h>
#define MAX_N 1000
char num[MAX_N+5][20];

int main(){
	int m,i,j;
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%s",num[i]);
	char temp[20],p,q;
	int nv=0,nan=0;
    long long int cnt=0,sum=0;
  for(int i=0;i<n;i++){
	if(num[i]=='p'){
		if((num[i][16]-'0')%2==0){
			nv+=1;
		}else{
			nan+=1;
		}
	}
/*	if(num[i]=='q'){
		cnt+=1;
		sum+=num[i][]
	}*/
}
    printf("%d %d",nan,nv);
//	printf("%d %d %lld",nan,nv,sun/cnt);
	return 0;
}
