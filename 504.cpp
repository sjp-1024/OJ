/***********************************************************
* 	  &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 504.cpp
*       &Created Time: 19Century 2019年11月06日 星期三 10时34分56秒 
*                          CST  Day/310 and Week/44 of this year
*       &Description:
***********************************************************/
#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <cstdlib>
using namespace std;
#define MAX_N 240
int head[10], tail[10];
int nxt[MAX_N + 5];

int main() {
	string num;
	int s;
	cin >> num >> s;
	for (int i = 0; i < 10; i++) 
		head[i] = num.size(), tail[i] = -1;
	for (int i = 0; num[i]; i++) {
		int x = num[i] - '0';
		if (head[x] == num.size()) head[x] = i;
		if (tail[x] != -1) nxt[tail[x]] = i;
		nxt[i] = num.size();
		tail[x] = i;
	}
	int flag = 0;
	for (int i = num.size() - s, ind = -1, flag = 0; i >= 1; i--) {
		int k = 0;
		for (; k < 10; k++) {
			while (head[k] <= ind) 
				head[k] = nxt[head[k]];
			if (num.size() - head[k] < i) continue;
			break;
		}
		if (k) flag = 1;
		if (flag + k) cout << k;
		ind = head[k];
	}
	if (flag == 0) cout << 0;
		cout << endl;
		return 0;
}

