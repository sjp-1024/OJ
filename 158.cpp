/*************************************************
        &Author:     
        &E-mail: 878491983@qq.com
        &Motto: Believe in yourself.
        &File Name: 158.cpp
        &Created Time: 19Century 2019年08月11日 星期日 00时19分56秒 
                           CST  Day/223 and Week/32 of this year
        &Description:


 ************************************************/


#include<iostream>
#include <cstdio>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = n; i >= 0; i--) {
        for (int j = 0; j < n - i; j++) {
            cout << " ";
        }
        cout << i;
        for (int j = 0; j < 2 * i - 1; j++) {
            cout << " ";
        }
        if (i == 0) {
            cout << endl;
            break;
        }
        cout << i<< endl;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++) {
            cout << " ";
        }
        cout << i;
        for (int j = 0; j < 2 * i - 1; j++) {
            cout << " ";
        }
        cout << i << endl;
    }
    return 0;
}

