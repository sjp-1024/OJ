/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 487.cpp
*       &Created Time: 19Century 2019年10月22日 星期二 18时50分03秒 
*                          CST  Day/295 and Week/42 of this year
*       &Description:
***********************************************************/
#include<iostream>
using namespace std;
#define MAX_N 45
long long a[MAX_N+5];
int main(){
	int  n;
	scanf("%d",&n);
    a[1]=2;
	a[2]=2;
    for(int i=3;i<=n;i++){
        a[i]=a[i-1]+a[i-2];
    }
	printf("%lld\n",a[n]);
	return 0;
}



