/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 261-1.cpp
*       &Created Time: 19Century 2019年09月01日 星期日 10时46分26秒 
*                          CST  Day/244 and Week/35 of this year
*       &Description:
*
*
***********************************************************/

#include<iostream>
#include<stack>
#include<cstdio>
#include<algorithm>
#include<climits>
using namespace std;

#define MAX_N 1000000

int stack_l[MAX_N+5],top_l;
int stack_r[MAX_N+5],top_r;
int sum_l[MAX_N+5],MAX_i[MAX_N+5];

void push_left(int x ){
	stack_l[++top_l]=x;
	sum_l[top_l]=sum_l[top_l-1]+x;//qzh
	MAX_i[top_l]=max(MAX_i[top_l-1],sum_l[top_l]);
}

int main(){
	int n;
	scanf("%d",&n);

	MAX_i[0]=INT_MIN;//shenming zuixiaoz
	while(n--){
		char str[2];
		int x;
		scanf("%s",str);
		if(str[0]=='I'){
			scanf("%d",&x);
			push_left(x);
		}else if(str[0]=='D'){
			if(top_l>0) top_l--;
		}else if(str[0]=='L'){
			if(top_l>0) stack_r[++top_r]=stack_l[top_l--];
		}else if(str[0]=='R'){
			if(top_r>0) push_left(stack_r[top_r--]);
		}
		else{
			scanf("%d",&x);
			printf("%d\n",MAX_i[x]);
		}
		
	}
	return 0;
}
