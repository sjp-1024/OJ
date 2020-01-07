#include<stdio.h>
int main(){
	char O,H,Y,a,b;
	scanf("%c %c",&a,&b);
	if(a==b) 
	 printf("TIE");
	else if(a=='O'&&b=='H') 
		printf("LI");
	else if(a=='O'&&b=='Y') 
	printf("MING");
	else if(a=='H'&&b=='O') 
		printf("MING");
	else if(a=='H'&&b=='Y') 
		printf("LI");
	else if(a=='Y'&&b=='O') 
		printf("LI");
	else if(a=='Y'&&b=='H') 
    	printf("MING");
return 0;
}  
