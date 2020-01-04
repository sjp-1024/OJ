/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 72.cpp
*       &Created Time: 19Century 2019年08月21日 星期三 20时47分53秒 
*                          CST  Day/233 and Week/33 of this year
*       &Description:
*
*
***********************************************************/

#include<iostream>
using namespace std;
#define MAX_N 10000

struct UnionSet{
	int fa[MAX_N+5],val[MAX_N+5];
	void init(int n){
		for(int i=1;i<=n;i++) {
			fa[i]=i;
		}
	}
	int get(int x){
		if(x==fa[x]) return x;
		int root=get(fa[x]);
		val[x]+=val[fa[x]];
		val[x]%=3;
		return fa[x]=root;
		return (fa[x]=(x-fa[x]? get(fa[x]):x));
	}
	void merge(int a,int b){
		int aa=get(a),bb=get(b);
		if(aa=bb) return ;
		fa[get(a)]=get(b);
		fa[aa]=bb;
		val[aa]=(c+val[b]-val[a]+3)%3;
		return ;
	}
};


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
			u.merge(b,c,2);

		}else{
			if(u.get(b)!=u.get(c)){
				cout<<"Unknown"<<endl;
			}else{
				switch((u.val[b]-u.))
			}
		}
	}
}
