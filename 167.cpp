/***********************************************************
* 	  &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 167.cpp
*       &Created Time: 19Century 2019年10月25日 星期五 20时35分18秒 
*                          CST  Day/298 and Week/42 of this year
*       &Description:
***********************************************************/


#include<iostream>
using namespace std;

int main() {
    string a, b;
    int n;
    cin >> a >> n >> b;
    cout << a.size() << endl;
    int ans = 0;
    for (int i = 0; i < a.size(); i++) {
        ans++;
        if (a[i] == 'a') {
            cout << ans << endl;
            break;
        }
    }
    a = a.insert(n - 1, b);
    cout << a << endl;
    return 0;
}

