/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: 270-A.cpp
 &Created Time: 19Century 2019年07月17日 星期三 18时10分10秒   CST  Day/198 and Week/28 of this year
 ************************************************/

#include<iostream>
#include<ctime>
using namespace std;
#define MAX_N 300000
int q[MAX_N+5],head,tail;
long long  a[MAX_N+5];
int main(){
	long long n,m;
	long long ans;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i],a[i]+=a[i-1];
	head=tail=0;
	q[tail++]==0;
	ans=a[1];
	for(int i=1;i<=n;i++){
		ans=max(ans,a[i]-a[q[head]]);
		while(tail-head&&a[q[tail-1]]>=a[i])
			tail--;
		q[tail++]=i;
		if(q[head]==i-m)
			head++;
	}
	cout<<ans<<endl;
	return 0;
}
