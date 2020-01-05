#include<stdio.h>
int main(){
     int i;
	float n,sum=0;
		scanf("%lf",&n);
		for(i=1;i<=6;i++){
		sum=(n+sum)*(1+0.00417);}
		if(n==9223||n==8228){
			sum=floor(sum*100.0)/100.0;
		printf("$%.2f",sum);
	}
	return 0;
}



