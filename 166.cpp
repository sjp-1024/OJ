/***********************************************************
* 	  &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 166.cpp
*       &Created Time: 19Century 2019年10月25日 星期五 20时32分38秒 
*                          CST  Day/298 and Week/42 of this year
*       &Description:
***********************************************************/


#include<iostream>
#include <cstring>

using namespace std;

int main() { 
    string a, b;
    int n;
    cin >> a >> n >> b;
    if (a.size() > 100) {
        cout << 100 << endl;
    } else {
        cout << a.size() << endl;
    }
    a = a.insert(n - 1, b);
    cout << a << endl;
    int ans = 0;
    for (int i = a.size() - 1; i >= 0; i--) {
        ans++;
        if (a[i] == 'x') {
            cout << ans << endl;
            break;
        }
    }
    return 0;
}

