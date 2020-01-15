/***********************************************************
* 	  &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 203.cpp
*       &Created Time: 19Century 2019年10月30日 星期三 23时46分53秒 
*                          CST  Day/303 and Week/43 of this year
*       &Description:
***********************************************************/


#include<iostream>
#include <algorithm>
using namespace std;

int main() {
    int m, n, k = 0, sum = 0;
    cin >> m >> n;
    int ans[15][15];
    int max[15] = {0};
    int high[300];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> ans[i][j];
            sum += ans[i][j];
            high[k] = ans[i][j];
            k++;    
        }
    }
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < m; i++) {
            if (max[j] < ans[i][j]) {
                max[j] = ans[i][j];
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << max[i] << endl;
    }
    sort(high, high + k, greater<int>());
    for (int i = 0; i < k; i++) {
        if (i) cout << " ";
        cout << high[i];
    }
    cout << endl;
    int val = sum % (m*n);
    if (val >= ((m*n) / 2)) {
        sum /= (m*n);
        sum += 1;
    }else{
        sum /= (n*m);
    }
    cout << sum << endl;
    int i, num = 0;
    for (i = 0; i < n * m; i++) {
        if (high[i] >= sum) {
            num++;
        }
    }
    cout << num << endl;
    return 0;
}

