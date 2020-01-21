/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 323.cpp
*       &Created Time: 19Century 2019年08月22日 星期四 18时02分43秒 
*                          CST  Day/234 and Week/33 of this year
*        &Description:１．堆
*        ２．并查集
*
*
***********************************************************/

#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstdlib>
using namespace std;
#define MAX_N 10000

struct Data{
	int p,exd;
}arr[MAX_N+5];

struct UnionSet{
	int fa[MAX_N+5];
	void init(int n){
		for(int i=0;i<=n;i++) fa[i]=i;
	}
	int get(int x){
		if(x==fa[x]){
			return x;
		}
			fa[x]=get(fa[x]);
			return fa[x];
	}
	void merge(int a,int b){
		fa[get(a)] =get(b);
	}
};

bool cmp(const Data &a,const Data &b){
	return a.p>b.p;
}
UnionSet u;

int main(){
	int n,ans=0;
	while(~scanf("%d",&n)){
	for(int i=0;i<n;i++){
		cin>>arr[i].p>>arr[i].exd;
		if(arr[i].exd>ans)
			ans=arr[i].exd;
	}
	sort(arr,arr+n,cmp);
	u.init(MAX_N);
	int sum=0;
	for(int i=0;i<n;i++){
		if(u.get(arr[i].exd)>0) {
		sum+=arr[i].p;
		int day=u.get(arr[i].exd);
		u.merge(day,day-1);
		}
	}
	cout<<sum<<endl;
}
	return 0;
}


