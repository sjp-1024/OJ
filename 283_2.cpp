/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 283_2.cpp
*       &Created Time: 19Century 2019年09月06日 星期五 11时06分00秒 
*                          CST  Day/249 and Week/35 of this year
*       &Description:
*
*
***********************************************************/

#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
#define MAX_N 100000
#define MAX_M 10000

char st[MAX_M+5][10];
int word[MAX_N+5],ch[MAX_N+5][10],sz;

void init(){
   sz = 1;
   memset(ch[0],0,sizeof(ch[0]));
   memset(word,0,sizeof(word));
}


void inse(char *s){
    int nl = strlen(s),u = 0;
    for(int i = 0 ; i < nl ;i++){
        int c = s[i] - '0';
        if(! ch[u][c]){
          memset(ch[sz],0,sizeof(ch[sz]));
            ch[u][c] = sz++;
        }
        u = ch[u][c];
        word[u]++;
    }
}
bool search(char *s){
   int nl = strlen(s),u = 0;
   for(int i = 0; i < nl; i++){
        int c = s[i] - '0';
        u = ch[u][c];
        if(word[u] == 1) return false;
   }
   return true;
}
int main(){
    int T,N;
    scanf("%d",&T);
    while(T--){
        init();
        scanf("%d",&N);
        for(int i = 1 ; i <= N; i++){
            scanf("%s",st[i]);
            inse(st[i]);
        }
        int ok = 1;
        for(int i = 1 ; i <= N; i++)
            if(search(st[i])){
                ok = 0;
                break;
            }
        if(ok) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
