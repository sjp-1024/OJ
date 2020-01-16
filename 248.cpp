/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 248.cpp
*       &Created Time: 19Century 2019年08月31日 星期六 23时48分07秒 
*                          CST  Day/243 and Week/34 of this year
*       &Description:
*
*
***********************************************************/


#include <stdio.h>
#define MAX_N 500000
int a[MAX_N+5],b[MAX_N+5],n;

long long ans=0;
void merge(int l1, int r1,int l2,int r2){
	int tot=0;
	while(l1 <= r1 && l2 <= r2){
		if(a[l2] < a[l1]) 
			b[++tot] = a[l2++],ans += r1 - l1+1 ;
		else 
			b[++tot] = a[l1++];
	}
	while(l1 <= r1)
		b[++tot] = a[l1++];
	while(l2 <= r2)
		b[++tot] = a[l2++];
	for(int i = tot,j = r2;i  >= 1; i--, j--)
		a[j] = b[i];
	
}//gb
void merge_sort(int l, int r){
	if(l < r){
		int mid = (l+r)>>1;
		merge_sort(l,mid);
		merge_sort(mid+1,r);
		merge(l,mid,mid+1,r); 
	}
}//gb dg
int main() {
	while(scanf("%d",&n),n){
		ans = 0;
		for(int i = 1; i <= n; i++) 
			scanf("%d",a+i);
		merge_sort(1,n);
		printf("%lld\n",ans);
	}
	return 0;
}

