/***********************************************************
*       &Author: ShijinPeng     
*       &E-mail: 878491983@qq.com
*       &Motto: Believe in yourself.
*       &File Name: 187.cpp
*       &Created Time: 19Century 2019年08月17日 星期六 19时49分37秒 
*                          CST  Day/229 and Week/32 of this year
*       &Description:
*       题目描述
汉诺塔（又称河内塔）问题是源于印度一个古老传说的益智玩具。大梵天创造世界的时候做了三根金刚石柱子，在一根柱子上从下往上按照大小顺序摞着 64 片黄金圆盘。大梵天命令婆罗门把圆盘从下面开始按大小顺序重新摆放在另一根柱子上。并且规定，在小圆盘上不能放大圆盘，在三根柱子之间一次只能移动一个圆盘。

现在路飞开始玩汉诺塔游戏， 他放了 n 片黄金圆盘在第一根柱子上，从上到下依次编号为 1 到 n ，1 号圆盘最小，n 号圆盘最大。路飞移动第i 号圆盘的时候需要花费 i 点体力。现在路飞想把圆盘全部移动到第 2 根柱子上，移动过程中路飞必须准守游戏规则。

现在路飞想知道他完成游戏的最小移动次数和最少消耗的体力。

输入
输入一个正整数 n(1≤ n ≤ 60 ) 表示黄金圆盘的个数

输出
一行输出 2个数，表示最小移动次数和最小消耗的体力，中间用一个空格隔开。

样例输入1
2
样例输出1
3 4
样例输入2
3
样例输出2
7 11
*
*
***********************************************************/

#include<iostream>
using namespace std;

long long hanoi(int n){
	if(n==1) return 1;
	return hanoi(n-1)*2+1;
}

long long hanoi_1(int n){
	if(n==1) return 1;
	return hanoi_1(n-1)*2+n;
}

int main(){
	int n;
	cin>>n;
	cout<<hanoi(n)<<" "<<hanoi_1(n)<<endl;
	return 0;

}
