/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 150-1.cpp
*       &Created Time: 19Century 2019年12月06日 星期五 20时05分46秒 
*                          CST  Day/340 and Week/48 of this year
*       &Description:
***********************************************************/


#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
    int n, m;
    int a[205][205];
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    
    for (int j = 0; j < m; j++) {
        for (int i = n - 1; i >= 0; i--) {
            if (i != n - 1) cout << " ";
            cout << a[i][j];
        }
        cout << endl;
    }
    return 0;
}

