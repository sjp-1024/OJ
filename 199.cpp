/***********************************************************
*       &Author: ShijinPeng     
*       &E-mail: 878491983@qq.com
*       &Motto: Believe in yourself.
*       &File Name: 199.cpp
*       &Created Time: 19Century 2019年08月16日 星期五 19时39分51秒 
*                          CST  Day/228 and Week/32 of this year
*       &Description:
***********************************************************/



#include<iostream>
using namespace std;
#define MAX_N 100000

int a[12] = {0};
int m;
int keep[MXA_N + 5] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

int f(int k) {
    int ans = 0;
    if (k < 10) return k;
    if (!keep[k]) {
        for (int i = 0; i < 10; i++) {
            keep[k] += a[i] * f(k - i - 1);
        }
    }
    return keep[k] % m;
}

int main() {
    int k;
    cin >> k >> m;
    for (int i = 0; i < 10; i++) {
        cin >> a[i];
    }
    int ans = f(k);
    cout << ans << endl;
    return 0;
}

