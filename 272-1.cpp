/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 272-1.cpp
*       &Created Time: 19Century 2019年09月02日 星期一 16时51分40秒 
*                          CST  Day/245 and Week/35 of this year
*       &Description:
*
*
***********************************************************/


#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

typedef pair<int,int>PII;
#define MAX_N 100000

PII a[MAX_N+5],ans[MAX_N+5];//a.xiabiao
int l[MAX_N+5],r[MAX_N+5],p[MAX_N+5];//p.n.weizhi

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i].first;
        a[i].second=i;
    }//jv xb
    sort(a+1,a+n+1);

    a[0].first=-(MAX_N+10),a[n+1].first=MAX_N+10;
    for(int i=1;i<=n;i++){
        l[i]=i-1,r[i]=i+1;
        p[a[i].second]=i;
    }
    for(int i=n;i>1;i--){
        int j=p[i],left=l[j],right=r[j];
        int  left_value=abs(a[j].first-a[left].first);
        int  right_value=abs(a[j].first-a[right].first);
        if(left_value<=right_value) 
			ans[i]={left_value,a[left].second};
        else
			ans[i]={right_value,a[right].second};
        l[right]=left,r[left]=right;
    }
    for(int i=2;i<=n;i++)
		cout<<ans[i].first<<' '<<ans[i].second<<endl;
    return 0;
}

