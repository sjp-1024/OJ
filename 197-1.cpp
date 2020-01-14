/***********************************************************
*       &Author:     
*       &E-mail: 878491983@qq.com
*       &Motto: Believe in yourself.
*       &File Name: 197-1.cpp
*       &Created Time: 19Century 2019年08月15日 星期四 16时41分18秒 
*                          CST  Day/227 and Week/32 of this year
*       &Description:
*       Sortt函数的第三个参数可以用这样的语句告诉程序你所采用的排序原则

less<数据类型>()//从小到大排序

greater<数据类型>()//从大到小排序
*
*
***********************************************************/


#include<iostream>
#include <algorithm>
using namespace std;

int main() {
    int a[11] = {0};
    for (int i = 0; i < 10; i++) {
        cin >> a[i];
    }
    sort(a, a + 10, greater<int>());
    for (int i = 0; i < 10; i++) {
        if (i != 0) cout << " ";
        cout << a[i];
    }
    cout << endl;
    return 0;
}

