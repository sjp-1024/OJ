#include<stdio.h>
int main(){
	float X,a;
	scanf("%f",&X);
	if(X<=15){
		a=X*6;
		printf("%.2f",a);}
	else{ 
		a=9*X-45;
		printf("%.2f",a);
	}
	return 0;
}
