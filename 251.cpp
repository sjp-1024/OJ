/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 251.cpp
*       &Created Time: 19Century 2019年11月27日 星期三 22时21分13秒 
*                          CST  Day/331 and Week/47 of this year
*       &Description:
***********************************************************/
#include <bits/stdc++.h>
using namespace std;
#define MAX_N 1000000

int x[MAX_N + 5],y[MAX_N + 5];
int main() {
    int n, bs1, bs2, sum=0;
    cin >> n;
    for (int i = 1; i <= n; i++)
       cin >> x[i] >> y[i]; 
    sort(x+1, x + (n+1));
    sort(y+1, y + (n+1));     
    for (int i=1; i<=n; i++)
       x[i] -= i; 
    sort(x+1, x + (n+1));  
    if (n%2 == 0) {
      bs1 = (x[n/2] + x[n/2+1])/2;
      bs2 = (y[n/2] + y[n/2+1])/2;
    } else {
      bs1 = x[n/2+1];
      bs2 = y[n/2+1];
    }
    for (int i=1; i<=n; i++) {
       sum += abs(bs1-x[i]) + abs(bs2-y[i]);
    }
    cout << sum << endl;
    return 0;
}
