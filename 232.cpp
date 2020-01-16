/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 232.cpp
*       &Created Time: 19Century 2019年08月29日 星期四 18时33分56秒 
*                          CST  Day/241 and Week/34 of this year
*       &Description:
*
*
***********************************************************/



#include<iostream>
#include<cstdio>
using namespace std;
#define MAX_N 5000

int f[MAX_N+5][MAX_N+5],N,R,r,c; 
short a[MAX_N+5][MAX_N+5];
int x,y,w;
int i,j;
int ans=0;
int main(){
	int N,R;
	cin>>N>>R;
	r=c=R;//r=chang c=kuan
	for(i=1;i<=N;i++){
		cin>>x>>y>>w;
		x++,y++;//zuobiaochuli
		a[x][y]=w;
		r=max(r,x); c=max(c,y);
	}

	for(i=1;i<=r;i++)
		for(j=1;j<=c;j++)
			f[i][j]=f[i-1][j]+f[i][j-1]-f[i-1][j-1]+a[i][j];
	for(i=R;i<=r;i++)
		for(j=R;j<=c;j++)
			ans=max(ans,f[i][j]-f[i][j-R]-f[i-R][j]+f[i-R][j-R]);
	cout<<ans<<endl;
	return 0;
}


