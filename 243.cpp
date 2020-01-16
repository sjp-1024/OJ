/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 243.cpp
*       &Created Time: 19Century 2019年08月30日 星期五 19时53分37秒 
*                          CST  Day/242 and Week/34 of this year
*       &Description:
*
*
***********************************************************/

#include<cstdio>
#include<iostream>
#include<algorithm>
#define MAX_N  200010
using namespace std;
#define LL long long 
int  s[MAX_N+5], e[MAX_N+5], d[MAX_N+5];
int n;
bool check(int x){
    int sum = 0;
    for(int i = 1; i <= n; i++)
        if(x >= s[i])
			sum += (min(e[i],x)-s[i])/d[i]+1;
    return sum&1;
}

int main(){
    int w; 
	cin>>w;
    while(w--){
        cin>>n;
        for(int i = 1; i <= n; i++)
            scanf("%d%d%d",&s[i],&e[i],&d[i]);
        LL l=0, r=0x7fffffff;//2^60
        while(r-l>0){
            LL mid = (l+r)/2;
            if(check(mid))r = mid;
            else l = mid+1;
        }
        int ans = 0;
        for(int i = 1; i <= n; i++)
            if(l>=s[i] && l<=e[i] && (l-s[i])%d[i]==0)
				ans++;
        if(ans&1)
			cout<<l<<' '<<ans<<'\n';
        else 
			cout<<"Poor QIN Teng:(\n";
    }
    return 0;
}
