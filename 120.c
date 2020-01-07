#include <iostream>
using namespace std;
int main(){
	    int y,m,d;
		int md[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d%d%d",&y,&m,&d);
	md[1] = y%4==0 && y%100 || y%400==0 ? 29 : 28;
	if(y>0 && m>0 && m<13 && d>0 && d<=md[m-1])
		  printf("YES");
	else
	      printf("NO");
 return 0;
}
