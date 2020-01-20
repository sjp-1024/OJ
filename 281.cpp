/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 281.cpp
*       &Created Time: 19Century 2019年08月21日 星期三 11时28分48秒 
*                          CST  Day/233 and Week/33 of this year
*       &Description:
*
*
***********************************************************/

#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
#define MAX_N 1000000

const int SIZE=MAX_N;
int trie[SIZE][26], flag = 1; 
int ed[SIZE];
int n, m;
char str[SIZE];

void insert(char* str) { 
    int len = strlen(str), p = 1;
    for (int k = 0; k < len; k++) {
        int ch = str[k]-'a';
        if (trie[p][ch] == 0) trie[p][ch] = ++flag;
        p = trie[p][ch];
    }
    ed[p]++;
}

int search(char* str) {
    int len = strlen(str), p = 1;
    int ans = 0;
    for (int k = 0; k < len; k++) {
        p = trie[p][str[k]-'a'];
        if (p == 0) return ans;
        ans += ed[p];
    }
    return ans;
}

int main() {
    cin>>n>>m;
    for(int i=1;i<=n;i++) {
        scanf("%s",str);
        insert(str);
    }
    for(int i=1;i<=m;i++) {
        scanf("%s",str);
        printf("%d\n", search(str));
    }
	return 0;
}
