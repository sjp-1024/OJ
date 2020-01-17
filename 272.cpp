/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 272.cpp
*       &Created Time: 19Century 2019年09月02日 星期一 16时27分24秒 
*                          CST  Day/245 and Week/35 of this year
*       &Description:
*
*
***********************************************************/


#include<iostream>
#include<algorithm>
#include<cmath>
using namespace  std;
#define MAX_N 100000
typedef pair<int,int > Pll;


int n;
int p[MAX_N+5],l[MAX_N+5],r[MAX_N+5];
Pll a[MAX_N+5],ans[MAX_N+5];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].first;
		a[i].second=i;
	}
	sort(a+1,a+1+n);
	a[0].first=1e9,a[n+1].first=-1e9;
	for(int i=1;i<=n;i++){
		l[i]=i-1,r[i]=i+1;
		p[a[i].second]=i;
	}
	for(int i=n;i>1;i--){
		int j=p[i],left-l[j],right=r[j];
		int lv=abs(a[j].first-a[left].first);
		int rv=abs(a[right].first-a[j].first);
		if(lv<=rv) ans[i]={lv,a[left].second};
		else ans[i]={rv,a[right].second};

	}
	
	for(int i=2;i<=n;i++)

		r[left]=right,l[right]=left;
		cout<<ans[i].first<<' '<<ans[i].second<<endl;
	return 0;
}

