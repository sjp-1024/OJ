#include<stdio.h>
int main(){
	int y,m,d,Y,M,D;

	scanf("%d %d %d",&y,&m,&d);
	switch(m)
	{
		case 1: case 3:  case 5:   case 7:  case 8:  case 10:

	    case 12:if(d>0&&d<=30)  d=d+1;else {m=1;d=1;y=y+1;}  
 printf("%d %d %d\n%d %d %d",y,m,d,y,m,d); break;

	    case 4:    case 6: case 9:
		case 11:if(d>0&&d<=29)  d=d+1;else {m=m+1;d=1;}     
printf("%d %d %d\n%d %d %d",y,m,d-2,y,m,d); break;

		case 2:if(y%4==0&&y%100!=0||y%400==0) {if(d>0&&d<=28)d=d+1; else{m=3; d=1;} }  else{m=3;  d=1;} 
printf("%d %d %d\n%d %d %d",y,m,d-2,y,m,d); break;
	}
return 0;
}

