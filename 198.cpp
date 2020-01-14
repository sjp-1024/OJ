/***********************************************************
*       &Author: ShijinPeng     
*       &E-mail: 878491983@qq.com
*       &Motto: Believe in yourself.
*       &File Name: 198.cpp
*       &Created Time: 19Century 2019年08月15日 星期四 16时57分38秒 
*                          CST  Day/227 and Week/32 of this year
*       &Description:
*
*       题目描述
​ 相信小伙伴们都学过斐波那契数列，它是这样的一个数列：1,1,2,3,5,8,13,21...1,1,2,3,5,8,13,21... 。 ​ 用 fnfn 表示斐波那契数列的第 nn 项，则有：f1=f2=1f1=f2=1 ，fn=fn−1+fn−2fn=fn−1+fn−2 。

​ 输入一个 nn，求出 fnfn 对 1000000007(109+7)1000000007(109+7) 取模结果。

输入
输入一个整数n(1≤n≤100000)n(1≤n≤100000)。

输出
输出 fnmod1000000007fnmod1000000007的值。

样例输入1
3
样例输出1
2

***********************************************************/


#include<iostream>
using namespace std;
#define MAX_N 1000000
#define F 1000000007
long long  M[MAX_N + 5] = {0, 1, 1};
int f(int n) {
    if (n == 1 || n == 2) return 1;
    if (!M[n]) {
        M[n] = f(n - 1) + f(n - 2);
    }
    return M[n] % F;
}

int main() {
    int n;
    cin >> n;
    cout << f(n) << endl;
    return 0;
}

