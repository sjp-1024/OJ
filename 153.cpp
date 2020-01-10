/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: 153.cpp
 &Created Time: 19Century 2019年07月02日 星期二 16时15分26秒   CST  Day/183 and Week/26 of this year
 ************************************************/
#include <stdio.h> 
int main() 
{ 
int day,mn,yr,i,days=0,s,k; 
int mont[13]={0,31,28,31,30,31,30,31,31,30,31,30,31}; 
char wek[][9]={ {'7'},{'1'}, {'2'}, {'3'}, {'4'}, {'5'}, {'6'} 
      }; 
scanf("%d %d %d",&yr,&mn,&day); 
if (yr%4==0||yr%100==0||yr%400==0) 
mont[2]=29; 
else 
mont[2]=28; 
for (i=0;i<mn;i++) 
days+=mont[i]; 
days+=day; 
s=yr-1+(int)((yr-1)/4)-(int)((yr-1)/100)+(int)((yr-1)/400)+days; 
k=s%7; 
printf("%s",wek[k]); 
   return 0; 
}

