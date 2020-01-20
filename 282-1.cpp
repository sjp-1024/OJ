/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: 282-1.cpp
 &Created Time: 19Century 2019年07月25日 星期四 15时42分30秒   CST  Day/206 and Week/29 of this year
 ************************************************/

#include <cstdio>
#include <algorithm>
#include <iostream>
#include <cstring>
#include <vector>
#define lson l,m,rt<<1
#define rson m+1,r,rt<<1|1
 
using namespace std;
 
typedef long long ll;
const ll INF=1e12;
const int MAXN=4e6+5;
int n,m,tot,ans;
int trie[MAXN][2];
int cnt[MAXN];
void iinsert(int x)
{
    int p=0;
    for(int i=31;i>=0;i--){
       int c=(x>>i)&1;
       if(!trie[p][c])
        trie[p][c]=++tot;
       p=trie[p][c];
    }
}
int isearch(int x)
{
    int p=0,ans=0;
    for(int i=31;i>=0;i--){
        int c=(x>>i)&1,o=c^1;
        if(trie[p][o])
            p=trie[p][o],ans=ans<<1|1;
        else
            p=trie[p][c],ans<<=1;
    }
    return ans;
}
 
int main()
{
    int n,ans=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int x;
        scanf("%d",&x);
        ans=max(ans,isearch(x));
        iinsert(x);
    }
    printf("%d\n",ans);
    return 0;
}

