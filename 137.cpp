#include<stdio.h>
int main(){
	int n;
	char a='A';
	scanf("%d",&n);
    for(int i=1;i<=n;i++){
		for(int j=1;j<=(n-i+1);j++){
          printf("%c",a);
		  a++;
		}
		printf("\n");
	}
		return 0;
	}
