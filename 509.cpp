/***********************************************************
* 	  &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 509.cpp
*       &Created Time: 19Century 2019年11月07日 星期四 13时34分20秒 
*                          CST  Day/311 and Week/44 of this year
*       &Description:
***********************************************************/


#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define MAX_N 300000

struct Data{
    int t,f;
}arr[MAX_N + 5]; 


bool cmp(const Data &a, const Data &b) {
    return a.f > b.f;
}

bool used[MAX_N] = {0};

int main() {
    int b, cnt, n;
    cin >> cnt >> n;
    for (int i = 1; i <= n; i++)  cin >> arr[i].t;
    for (int i = 1;i <= n; i++) 	cin >> arr[i].f;
    sort(arr + 1, arr + 1 + n, cmp);
    for (int i = 1; i <= n; i++) 
        for (int j = arr[i].t; j >= 1; j--) 
            if (used[j] == 0) {
                used[j] = 1;
                arr[i].f = 0;
                break;
            }
	int sum = 0;
    for (int i = 1; i <= n; i++)
    sum += arr[i].f;
    cnt = cnt - sum;
    cout << cnt << endl;
	return 0;
}
