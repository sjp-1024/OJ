/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: 255.cpp
 &Created Time: 19Century 2019年06月29日 星期六 19时43分43秒   CST  Day/180 and Week/25 of this year
 ************************************************/
#include<iostream>
#include <algorithm>
#include <cmath>
using namespace std;
#define MAX_N 1000
struct Range{
	double l,r;
}arr[MAX_N+5];
bool cmp(const Range &a,const Range &b){
	if(a.r-b.r)return a.r<b.r;
	return a.l>b.l;
}
int main(){
	int n;
	double d;
	cin>>n>>d;
	int flag =0;
	for(int i=0;i<n;i++){
		double x,y;
		cin>>x>>y;
		if(y>d)flag=1;
		arr[i].l=x-sqrt(d*d-y*y);
		arr[i].r=x+sqrt(d*d-y*y);
	}
	if(flag){
		cout<<-1<<endl;
		return 0;
	}
	sort(arr,arr+n,cmp);
	int ans=1;

	double p=arr[0].r;
		for(int i=1;i<n;i++){
			if(arr[i].l>p){
				p=arr[i].r;
				ans+=1;
			}
		}
		cout<<ans<<endl;
	return 0;
}
