/***********************************************************
*       &Author: ShijinPeng     
*       &E-mail: 878491983@qq.com
*       &Motto: Believe in yourself.
*       &File Name: 186.cpp
*       &Created Time: 19Century 2019年08月17日 星期六 19时44分48秒 
*                          CST  Day/229 and Week/32 of this year
*       &Description:题目描述
有一个小球掉落在一串连续的弹簧板上，小球落到某一个弹簧板后，会被弹到某一个地点，直到小球被弹到弹簧板以外的地方。

假设有 n 个连续的弹簧板，每个弹簧板占一个单位距离，a[i] 代表代表第 i 个弹簧板会把小球向前弹 a[i] 个距离。比如位置 1 的弹簧能让小球前进 2 个距离到达位置 3 。如果小球落到某个弹簧板后，经过一系列弹跳会被弹出弹簧板，那么小球就能从这个弹簧板弹出来。

现在小球掉到了1 号弹簧板上面，那么这个小球会被弹起多少次，才会弹出弹簧板。 1号弹簧板也算一次。

输入
第一个行输入一个 n 代表一共有 n(1 ≤ n≤ 100000)个弹簧板。

第二行输入 n 个数字，中间用空格分开。第 i 个数字 a[i](0<a[i] ≤ 30) 代表第 i​ 个弹簧板可以让小球移动的距离。

输出
输出一个整数，表示小球被弹起的次数。

样例输入1
5
2 2 3 1 2
样例输出1
2
***********************************************************/


#include<iostream>
using namespace std;

#define MAX_N 100000

int main() {
    int n;
    cin>>n;
    int a[MAX_N+5];
    for (int i=0;i<n;i++) {
        cin>>a[i];
    }
    int step=1;
    int sum=1;
    for (int j=0;j<n;j+=a[j]) {
        step+=a[j];
        if(step>n) break;
        sum++;
    }
    cout<<sum<<endl;
    return 0;
}

