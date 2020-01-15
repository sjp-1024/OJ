/*************************************************
 &Author:     
 &E-mail: 878491983@qq.com
 &Motto: Believe in yourself.
 &File Name: 214.cpp
 &Created Time: 19Century 2019年08月09日 星期五 14时09分34秒   CST  Day/221 and Week/31 of this year
 &Description:

 ************************************************/
#include<iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

int main() {
    int n;
    cin >> n;
    double cj[30];
    for (int i = 0; i < n; i++) {
        cin >> cj[i];
    }
    sort(cj, cj + n, greater<int>());//sort

    double k, sum = 0;
    cin >> k;
    for (int i = 0; i < k; i++) {
        sum += cj[i];
    }
    printf("%.2f\n", sum / k);
    return 0;
}

