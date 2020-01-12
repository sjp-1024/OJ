/***********************************************************
* 	  &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 168.cpp
*       &Created Time: 19Century 2019年10月25日 星期五 20时41分49秒 
*                          CST  Day/298 and Week/42 of this year
*       &Description:
***********************************************************/


#include<iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

int main() {
    int n;
    cin >> n;
    string a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if (a[i][0] >= 'a' && a[i][0] <= 'z')
            a[i][0] -= 32;
        for (int j = 1; j < a[i].size(); j++)
            if (a[i][j] >= 65 && a[i][j] <= 96)
                a[i][j] += 32;    
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }
    return 0;
}

