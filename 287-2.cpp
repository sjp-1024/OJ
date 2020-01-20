/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 287-2.cpp
*       &Created Time: 19Century 2019年10月02日 星期三 11时03分01秒 
*                          CST  Day/275 and Week/39 of this year
*       &Description:
***********************************************************/


#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<queue>
using namespace std;
priority_queue<int> q;
int n,a[100010],ans;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		q.push(-a[i]);
	}
	for(int i=1;i<n;i++)
	{
		int x=-q.top(); q.pop();
		int y=-q.top(); q.pop();
		ans+=x+y;
		q.push(-x-y);

	}

	cout<<ans<<endl;

}
