#include<iostream>
#include<cstring>
using namespace std;
#define MAX_N 20

int main(){
	int n,nan=0,nv=0,i;
	char num[MAX_N+5];
	char*p=num;
	char a,b;
	scanf("%d",&n);
	for(int i=0;i<=n;i++){
		scanf("%s\n",num);
	}
	int sum=0,cnt=0,cnt1=0;
	b=*(p);
	a=*(p+16);

	printf("%d\n",a);
	if(b='i'){ 
		if(a%2==0){
			nv+=1;
		}else{
			nan+=1;
		}
	}
/*	if(b=='q'){
		for(int i=*(p+1);i<*(p+10);i++){
			sum+=num[i];
			cnt+=1;
		}
	}*/
	printf("%d %d \n",nan,nv);
	return 0;
}
