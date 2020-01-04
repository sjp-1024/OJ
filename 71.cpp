/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 71.cpp
*       &Created Time: 19Century 2019年08月21日 星期三 20时02分17秒 
*                          CST  Day/233 and Week/33 of this year
*       &Description:并查集1
*       2.路径压缩
*       ３．暗置优化
*
*
***********************************************************/




#include<iostream>
using namespace std;
#include<cstdio>
#include<cstring>
#include<algorithm>
#define MAX_N 100000

struct UnionSet{
	int fa[MAX_N+5];
	void init(int n){
		for(int i=1;i<=n;i++){
			fa[i]=i;
		}
	}
	int get(int x){
			if(x==fa[x]) return x;
			return get(fa[x]);
	}
	void merge (int a,int b){
			fa[get(a)]=get(b);
	}
};

UnionSet u;

void read(int &n,int &m){
	cin>>n>>m;
	u.init(n);
	return ;
}

int main(){
	int n,m;
	read(n,m);
	for(int i=0;i<m;i++){
		int a,b,c;
		cin>>a>>b>>c;
		if(a==1){
			u.merge(b,c);

		}else {

			cout<<(u.get(b)==u.get(c)? "Yes":"No")<<endl;
		}
	}
	return 0;
}
