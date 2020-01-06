#include<iostream>
using namespace std;
int main(){
	int a,b ;
	scanf("%d",&a);
	if( a%10==9){
		printf("YES");}
	else if(b=a/10,
			b%10==9){
		printf("YES");}
	else if(b/10==9){
		printf("YES");}
	else{
		printf("NO");}
	return 0;
}
