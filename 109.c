#include<stdio.h>
int main(){
	int n,a,b;
	scanf("%d",&n);
	if((n%10)%2==0){
		printf("yes");}
	else if(((n%100)/10)%2==0){
		printf("yes");}
	else if(((n%1000)/100)%2==0){
		printf("yes");}
	else if((n/1000)%2==0){
		printf("yes");}
	else{
		printf("no");}\
			return 0;
}
