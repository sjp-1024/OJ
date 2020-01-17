/***********************************************************
*		&Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 278.cpp
*       &Created Time: 19Century 2019年09月04日 星期三 12时35分40秒 
*                          CST  Day/24７ and Week/35 of this year
*       &Description:
*    

*思路：
ＫＭＰ算法
next数组扩展应用
***********************************************************/


#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
using namespace std;

#define MAX_N 10000000

char str[MAX_N+5];
int nxt[MAX_N+5];
int ans[MAX_N+5];


void get_next(char *str,int *next){
	int j=-1;
	nxt[0]=-1;
	for(int i=1;str[i];i++){
		while(j!=-1  && str[j+1]!=str[i]) j=nxt[j]; 
		if(str[j+1]==str[i])  j+=1;
		nxt[i]=j;
	}
	return ;
}

int main(){
	int n;
	cin>>n;
	cin>>str;
	get_next(str,nxt);
	for(int i=0;i<n;i++){
		if(nxt[i]==-1 || i-nxt[i]!=ans[nxt[i]]){
			ans[i]=i+1;
		}else{
			ans[i]=ans[nxt[i]];
		}
	}
	for(int i=0;i<n;i++){
		if(ans[i]==i+1) continue;
		cout<<i+1<<" "<<(i+1)/ans[i]<<endl;
	}
	return 0;
}

