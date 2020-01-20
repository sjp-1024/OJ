/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 282_2.cpp
*       &Created Time: 19Century 2019年08月22日 星期四 13时10分27秒 
*                          CST  Day/234 and Week/33 of this year
*       &Description:
*
*
***********************************************************/


#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
using namespace std;

#define MAX_N 320000  //MAX_M=MAX_N/32
#define MAX_M 10000
#define BASE 30

struct Node{
	int num;
	int next[2];
}trie[MAX_N+5];

int root=1,cnt=1;

inline int getNode(){
	return ++cnt;
}

void insert(int num){
	int p=root;
	for(int i=BASE;i>=0;i--){
		int ind=num>>i & 1;
		if(trie[p].next[ind]==0) trie[p].next[ind]=getNode();
		p=trie[p].next[ind];
	}
	trie[p].num=num;
	return ;
}

int query(int num){
	int p=root,cnt=0;
	for(int i=BASE;i>=0;i-- ){
		int ind=num>>i & 1;
		int rind=!ind;
		if(trie[p].next[rind]) p=trie[p].next[rind];//f
		else p=trie[p].next[ind];//t
	}
	return num^trie[p].num;
}

int main(){
	char arr[MAX_M+5];
	int n,ans=0;
	cin>>n;
	for(int i=1;i<=n;i++) {
		cin>>arr[i];
		insert(arr[i]);
		ans=max(ans,query(arr[i]));
	}
	cout<<ans<<endl;
	return 0;
}
