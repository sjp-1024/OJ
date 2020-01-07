#include<stdio.h>
int main(){
	int y,m,d,Y,M,D;
	scanf("%d %d %d",&y,&m,&d);
	switch(m)
	{
		case 1:if(d>0&&d<=30)  d=d+1;else {m=m+1;d=1;}  
               if(d=1)   D=d-1;else{M=12;D=31;Y=y-1;}
printf("%d %d %d \n%d %d %d",Y,M,D,y,m,d); break;
			   

		case 3:if(d>0&&d<=30)  d=d+1;else {m=m+1;d=1;}       
 printf("%d %d %d\n%d %d %d",y,m,d-2,y,m,d); break;

		case 5:if(d>0&&d<=30)  d=d+1;else {m=m+1;d=1;}   
 printf("%d %d %d\n%d %d %d",y,m,d-2,y,m,d); break;

	    case 7:if(d>0&&d<=30)  d=d+1;else {m=m+1;d=1;} 
 printf("%d %d %d\n%d %d %d",y,m,d-2,y,m,d); break;

		case 8:if(d>0&&d<=30)  d=d+1;else {m=m+1;d=1;}
 printf("%d %d %d\n%d %d %d",y,m,d-2,y,m,d); break;

		case 10:if(d>0&&d<=30)  d=d+1;else {m=m+1;d=1;}    
 printf("%d %d %d\n%d %d %d",y,m,d-2,y,m,d); break;

	    case 12:if(d>0&&d<=30)  d=d+1;else {m=1;d=1;y=y+1;}  
 printf("%d %d %d\n%d %d %d",y,m,d,y,m,d); break;

	    case 4:if(d>0&&d<=29)  d=d+1;else {m=m+1;d=1;}  
 printf("%d %d %d\n%d %d %d",y,m,d-2,y,m,d); break;

	    case 6:if(d>0&&d<=29)  d=d+1;else {m=m+1;d=1;}  
 printf("%d %d %d\n%d %d %d",y,m,d-2,y,m,d); break;

		case 9:if(d>0&&d<=29)  d=d+1;else {m=m+1;d=1;}     
printf("%d %d %d\n%d %d %d",y,m,d-2,y,m,d); break;

		case 11:if(d>0&&d<=29)  d=d+1;else {m=m+1;d=1;}     
printf("%d %d %d\n%d %d %d",y,m,d-2,y,m,d); break;

		case 2:if(y%4==0&&y%100!=0||y%400==0) {if(d>0&&d<=28)d=d+1; else{m=3; d=1;} }  else{m=3;  d=1;} 
printf("%d %d %d\n%d %d %d",y,m,d-2,y,m,d); break;
	}
return 0;
}

