/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 35.cpp
*       &Created Time: 19Century 2019年12月06日 星期五 18时12分33秒 
*                          CST  Day/340 and Week/48 of this year
*       &Description:
***********************************************************/


#include <iostream>
using namespace std;
int main() {
    int a, b;
    int x;
    cin >> a >> b;
    if (a > 0 && b > 0) x = a;
    if (a < 0) x = 0;
    if (a>b || a==b) cout << "ERROR"<<endl;
    for (int i = x; i<= b; i++) {
        cout << i<< endl;
    }
        return 0;
}
