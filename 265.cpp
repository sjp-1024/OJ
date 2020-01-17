/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 265.cpp
*       &Created Time: 19Century 2019年09月06日 星期五 13时44分09秒 
*                          CST  Day/249 and Week/35 of this year
*       &Description:
*
*
***********************************************************/


#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
#define MAX_N 100000

int pos[MAX_N +5];
char s[MAX_N+5], f[MAX_N+5]; 
int ans=0;
int main() {
	scanf("%s", s);
	int n = strlen(s);
	int p = 0;
	int h_data;
	for (int i = 0; i < n; i++) {
		if (s[i] == '(')
			f[++p] = ')', pos[p] = i;
		else if (s[i] == '[')
			f[++p] = ']', pos[p] = i;
		else if (s[i] == '{')
			f[++p] = '}', pos[p] = i;
		else {
			if (p && s[i] == f[p]) {
				int c_data = i - pos[p] + 1;
				if (p == 1) {
					ans = max(ans, h_data + c_data);
					h_data += c_data; 
				}
				else
					ans = max(ans, c_data);
				p--;
			}
			else h_data = p = 0;
		}
	}
	cout << ans << endl;
}

