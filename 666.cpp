/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 666.cpp
*       &Created Time: 19Century 2019年10月24日 星期四 23时15分58秒 
*                          CST  Day/297 and Week/42 of this year
*       &Description:
***********************************************************/
#include<stdio.h>
int main()
{
 int x;
 scanf("%d",&x);
 
 for( x=2; x<100; x++)
 {
  int i;
  int isPrime=1;
  for( i=2; i<x; i++)
  {
   if (x%i==0){
    isPrime=1;
    break;
   }
  }
  if ( isPrime==1 ){
   printf("%d",x);
   
  }
 }
 printf("\n");
 
 return 0;
}
