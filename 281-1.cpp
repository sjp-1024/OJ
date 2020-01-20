/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 281-1.cpp
*       &Created Time: 19Century 2019年08月21日 星期三 16时09分33秒 
*                          CST  Day/233 and Week/33 of this year
*       &Description:
*
*
***********************************************************/

#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
using namespace std;

#define MAX_N 1000000

struct Node{
	int flag;
	int next[26];
} trie[MAX_N+5];

int root=1,cnt=1;

int getNode(){
	return ++cnt;
}

void insert( char *str){
	int p=root;
	for(int i=0;str[i];i++){
		int ind=str[i]-'a';
		if(trie[p].next[ind]==0) trie[p].next[ind]=getNode();
		p=trie[p].next[ind];
	}
	trie[p].flag+=1;
	return ;
}

int query(const char *str){
	int p=root,cnt=0;
	for(int i=0;str[i]&& p;i++ ){
		p=trie[p].next[str[i]-'a'];
		cnt+=trie[p].flag;
	}
	return cnt;
}

int main(){
	char str[MAX_N+5];
	int n,m;
	scanf("%d%d",&n,&m);
	while(n--){
		scanf("%s",str);
		insert(str);
	}
	while(m--){
		scanf("%s",str);
		printf("%d\n",query(str));
	}
	return 0;
}
