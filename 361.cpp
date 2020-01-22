/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 361.cpp
*       &Created Time: 19Century 2019年10月23日 星期三 15时35分17秒 
*                          CST  Day/296 and Week/42 of this year
*       &Description:
***********************************************************/


#include<iostream>
using namespace std;

#define MAX_N 6000
struct edge{
	int to,next;
}g[(MAX_N<<1)+5];

int val[MAX_N+5];
int head[MAX_N+5],cnt=0;
inline void add(int a,int b){
	g[++cnt]={b,head[a]};
	head[a]=cnt;
}

void 



int main(){

}
