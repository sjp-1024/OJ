/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 417.cpp
*       &Created Time: 19Century 2019年10月07日 星期一 10时42分52秒 
*                          CST  Day/280 and Week/40 of this year
*       &Description:
***********************************************************/


#include<map>
#include<cmath>
#include<vector>
#include<queue>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdlib>
#include<cstdio>
#include<algorithm>
using namespace std;
#define MAX_N 20000
#define MAX_M 100000




struct Edge{
	int t,next,c;
}g[MAX_M+5];
int head[MAX_N+5],cnt=0;
int dis[MAX_M+5],vis[MAX_N+5];
inline void add(int a,int b,int c){
	g[++cnt]={b,head[a],c};
	head[a]=cnt;
}

void spfa(int s){
	memset(dis,0x3f,sizeof(dis));
	memset(vis,0,sizeof(vis));
	queue<int>q;
	dis[s]=0;
	vis[s]=1;
	q.push(s);
	while(!q.empty()){
		int ind=q.front();
		q.pop();
		vis[ind]=0;
		for(int i=head[ind];i;i=g[i].next){
			int to=g[i].t,c=g[i].c;
			if(dis[ind]+c<dis[to]){
				dis[to]=dis[ind]+c;
				if(!vis[to])q.push(to),vis[to]=1;
			}
		}
	}
	return ;
}

int n,m;
int ind(int i,int j){
	return (i-1)*m+j+1;
}

int arr[25];

int main(){
	int s,t;
	cin>>n>>m;
	for(int i=1;i<m;i++){
		cin>>arr[i];
		if(arr[i]==0)s=i;
	}
	s=ind(1,s);
	t=n*m+1;
	for(int i=1;i<=n;i++){
		for(int j=0;j<m;j++){
			if(j)add(ind(i,j),ind(i,j-1),1);
			if(j+1<m) add(ind(i,j),ind(i,j+1),1);
			if(i==n) add(ind(i,j),t,0);
			if(i+arr[j]<=0) continue;
			if(i+arr[j]>n)continue;
			add(ind(i,j),ind(i+arr[j],j),abs(2*arr[j]));
		}
	}
	spfa(s);
	if(dis[t] ==INF){
		cout<<-1<<endl;
	}else{
		cout<<dis[t]<<endl;
	}
	return 0;

}

