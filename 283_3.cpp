/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 283_3.cpp
*       &Created Time: 19Century 2019年09月06日 星期五 12时39分05秒 
*                          CST  Day/249 and Week/35 of this year
*       &Description:
*

***********************************************************/

#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
#define MAX_N 100000
#define MAX_M 10000

char st[MAX_M+5][10];
int ch[MAX_N+5][10],sz;

int b[MAX_N+5];


void init(){
   sz = 1;
   memset(ch[0],0,sizeof(ch[0]));
   memset(b,0,sizeof(b));
}

void insert(char *s){
    int nl = strlen(s),u = 0;
    for(int i = 0 ; i < nl ;i++){
        int c = s[i] - '0';
        if(! ch[u][c]){
          memset(ch[sz],0,sizeof(ch[sz]));
            ch[u][c] = sz++;
        }
        u = ch[u][c];
        b[u]++;
    }
}

int query(char *s){
   int nl = strlen(s),u = 0;
   for(int i = 0; i < nl; i++){
        int c = s[i] - '0';
        u = ch[u][c];
        if(b[u] == 1) return 0;
   }
   return 1;
}
int main(){
    int N;
	scanf("%d",&N);
	init();
    for(int i = 1 ; i <= N; i++){
         scanf("%s",st[i]);
        insert(st[i]);
    }
    int ok = 1;
    for(int i = 1 ; i <= N; i++)
        if(query(st[i])){
            ok = 0;
            break;
        }
    if(ok) 
		printf("YES\n");
    else
		printf("NO\n");
    return 0;
}
