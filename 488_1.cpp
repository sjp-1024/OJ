/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 488_1.cpp
*       &Created Time: 19Century 2019年10月24日 星期四 23时13分41秒 
*                          CST  Day/297 and Week/42 of this year
*       &Description:
***********************************************************/


#include<iostream>
#include <cmath>
using namespace std;
#define MAX_N 100000

struct point {
    int x, y;
} point[MAX_N + 5];

int dis(struct point &a, struct point &b) {
    return abs(a.x - b.x) + abs(a.y - b.y);
}

int dp(int n, int key) {
    if (n == 1) return 0;
    if (n == 2) return dis(point[2], point[1]);
    if (key == 0) return dp(n - 1, 0) + dis(point[n], point[n - 1]);
    else if (key == 1) {
        return min(dp(n - 1, 1) + dis(point[n], point[n - 1]), dp(n - 2, 0) + dis(point[n - 2], point[n]));
    }
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> point[i].x >> point[i].y;
    
    cout << dp(n, 1) << endl;
    return 0;
}
