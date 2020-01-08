#include<iostream>
using namespace std;
int main() { 
	 int x,y,i; 
	 int c=0;
	scanf("%d %d",&x,&y); 
	for(i=x;i<=y;i++) {
		if(i%11==0){
			if(c)
				printf(" ");
			   c++;
				printf("%d",i);}
	   }
return 0;
	   }  

