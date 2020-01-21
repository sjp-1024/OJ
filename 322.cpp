/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 322.cpp
*       &Created Time: 19Century 2019年08月22日 星期四 14时52分26秒 
*                          CST  Day/234 and Week/33 of this year
*       &Description: 坐标重映射，坐标离散化
*       　　　　　　　并查集
*					　
*
*
***********************************************************/


#include<iostream>
#include<cstdio>
#include<map>
#include<cstdlib>
#include<algorithm>
using namespace std;

#define MAX_N 1000000
map<int ,int >ind;//cys
int cnt =0;

struct Data{
	int i,j,e;
}arr[MAX_N+5];

struct UnionSet{
	int fa[(MAX_N<<1)+5];
	void init(int n){
		for(int i=1;i<=n;i++) 
			fa[i]=i;
	}
	int get(int x){
		if(x==fa[x]){
			return x;
		}
			fa[x]=get(fa[x]);
			return fa[x];
	}
	void merge(int a,int b){
		fa[get(a)]=get(b);
	}
};

UnionSet u;

int solve(){
	int n;
	cin>>n;
	cnt=0,ind.clear();
	for(int i=0;i<n;i++){
		cin>>arr[i].i>>arr[i].j>>arr[i].e;
		if(ind.find(arr[i].i)==ind.end()) 
			ind[arr[i].i]=(++cnt);
		if(ind.find(arr[i].j)==ind.end()) 
			ind[arr[i].j]=(++cnt);
		arr[i].i=ind[arr[i].i];
		arr[i].j=ind[arr[i].j];
	}
	u.init(cnt);
	for(int i=0;i<n;i++){
		if(arr[i].e !=1) continue;
		u.merge(arr[i].i,arr[i].j);
	}
	int flag=1;
	for(int i=0;i<n;i++){
		if(arr[i].e==1) continue;
		if(u.get(arr[i].i) !=u.get(arr[i].j)) continue ;
		flag=0;
		break;
	}
	cout<<(flag ? "YES" :"NO") <<endl;
	return 0;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
