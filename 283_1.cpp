/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 283_1.cpp
*       &Created Time: 19Century 2019年09月05日 星期四 15时44分49秒 
*                          CST  Day/248 and Week/35 of this year
*       &Description:
*
*
***********************************************************/


#include<iostream>
using namespace std;

#define MAX_N 100000
#define MAX_M 10000
char st[MAX_M +5][10];
int End[MAX_N+5],trie[MAX_N+5][10],tot;

void init(){
    tot=1;
    memset(trie[0],0,sizeof(trie[0]));
    memset(End,0,sizeof(End));
}
void insert(char *s){
    int len=strlen(s),p=0;
    for(int i=0;i<len-1;i++){
        int ch=s[i]-'0';
        if(!trie[p][ch]){
            memset(trie[tot],0,sizeof(trie[tot]));
            trie[p][ch]=(tot++);
        }
        p=trie[p][ch];
        End[p]++;
    }
}
bool check(char *s){
    int len=strlen(s),p=0;
    for(int i=0;i<len-1;i++){
        int ch=s[i]-'0';
        p=trie[p][ch];
        if(End[p]==1)//如果出现过了
            return false;
    }
    return true;
}
int main(){
    int n;
        init();
        scanf("%d",&n);
        for(int i=1;i<n;i++){
            scanf("%s",st[i]);
            insert(st[i]);
        }
        int ok = 1;
        for(int i=1;i<=n;i++){
            if(check(st[i])){
                ok = 0;
                break;
            }
		}
        if(ok) 
            puts("YES");
        else
            puts("NO");
    return 0;
}
