/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 71-1.cpp
*       &Created Time: 19Century 2019年09月04日 星期三 17时41分17秒 
*                          CST  Day/247 and Week/35 of this year
*       &Description:
*
*
***********************************************************/


#include<iostream>
using namespace std;
#define MAX_N 100000

//lujin
struct UnioSet{
	int fa[MAX_N +5];
	void init(int n){
		for(int i=1;i<=n;i++) fa[i]=i;
	}
	int get(int x){
		return (fa[x]=(x==fa[x] ? x : get(fa[x])));
	}
	void merge(int a,int b){
		 fa[get(a)]=get(b);
	}
};

//anzhiyuhua

struct UnioSet{
	int fa[MAX_N +5],size[MAX_N+5];
	void init(int n){
		for(int i=1;i<=n;i++) {
			fa[i]=i;
			size[i]=1;
		}
	}
	int get(int x){
		return (fa[x]=(x==fa[x] ? x : get(fa[x])));
	}
	void merge(int a,int b){
		int aa=get(a),bb=get(b);
		 if(aa==bb) return ;
		 if(size[aa]>size[bb]){
			 fa[bb]=aa;
			 size[aa]+=size[bb];
		 }else{
			 fa[aa]=bb;
			 size[bb]+=size[aa];
		 }
	}
};

