/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: 182.cpp
 &Created Time: 19Century 2019年07月06日 星期六 09时56分15秒   CST  Day/187 and Week/26 of this year
 ************************************************/
#include<stdio.h>
 
int main()
{
	int x,max,n;
	scanf("%d",&n);
	scanf("%d",&x);

	max=x;
	for(int i=0;i<n-1;i++){
	scanf("%d",&x);

		if(max<x){
			max=x;
		}
	}
	printf("%d",max); 
	return 0;	
} 

