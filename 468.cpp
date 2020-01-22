/***********************************************************
*       &Author: ShijinPeng     
*       &E-mail: 878491983@qq.com
*       &Motto: Believe in yourself.
*       &File Name: 468.cpp
*       &Created Time: 19Century 2019年08月17日 星期六 20时07分53秒 
*                          CST  Day/229 and Week/32 of this year
*       &Description:题目描述
​ 输入两个正整数m和n，求他们的最大公约数。

输入
​ 一行两个正整数m和n，用一个空格隔开，2≤ m，n ≤ 10000。

输出
​ 一行一个正整数，表示m和n的最大公约数。

样例输入
24 36
样例输出
12
*
*
***********************************************************/


#include<iostream>
using namespace std;
typedef long long lint;
lint gcd(lint a,lint b){
	return (b? gcd(b,a%b):a);
}

int main(){
	lint m,n;
	cin>>m>>n;
	cout<<gcd(m,n)<<endl;
	return 0;
}
