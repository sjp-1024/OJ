/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: oj253.cpp
 &Created Time: 19Century 2019年06月29日 星期六 18时30分36秒   CST  Day/180 and Week/25 of this year
 ************************************************/
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<algorithm>
using namespace std;
#define MAX_N 2500
struct Range {
	int x,y;
}arr[MAX_N+5];
int cnt[MAX_N+5];
bool cmp(const Range &a,const Range &b){
	if(a.y-b.y)return a.y<b.y;
	return a.x>b.x;
}
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>arr[i].x>>arr[i].y;
	}
	for(int i=0;i<m;i++){
		int a,b;
		cin>>a>>b;
		cnt[a]+=b;
	}
	sort(arr,arr + n,cmp);
	int ans=0;
	for(int i=0;i<n;i++){
		int flag=-1;
		for(int j=arr[i].x;j<=arr[j].y&&flag==-1;j++){
			if(cnt[j]==0) continue;
			flag=j;
		}
		if(flag!=-1) cnt[flag]-=1,ans+=1;
	}
	cout<<ans<<endl;
	return 0;
}
