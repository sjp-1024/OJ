/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 39.cpp
*       &Created Time: 19Century 2019年12月06日 星期五 18时07分47秒 
*                          CST  Day/340 and Week/48 of this year
*       &Description:
***********************************************************/

#include<iostream>
using namespace std;
int main() {
    int a, b;
    int x;
    cin >> a >> b;
    if (a % 2 ==0)  x = a; 
    if (a % 2 ==1)  x = a+1;
    if (a < 0) x = 0;
    for (int i = x; i <= b; i++) {
        if (i % 2== 0)  
        cout << i << endl;
    }
    return 0;
}

