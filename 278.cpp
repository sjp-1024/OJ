/***********************************************************
*       &Author: ShijinPeng     
*       &E-mail: 878491983@qq.com
*       &Motto: Believe in yourself.
*       &File Name: 278.cpp
*       &Created Time: 19Century 2019年08月16日 星期五 14时39分05秒 
*                          CST  Day/228 and Week/32 of this year
*       &Description:
题目描述
​ 给出一个字符串，从字符串起始位遍历到最后一位，若起始位至当前位能被一个前缀串循环 nn 次组成，则输出当前位的位置和 nn。（n≥2）（n≥2）

输入
​ 第一行输入一个数 LL 表示字符串长度。

​ 第二行输入字符串。

输出
​ 每当能达成题目要求时输出一行两个数，表示当前位置和 nn。

样例输入
12
aabaabaabaab
样例输出
2 2
6 2
9 3
12 4
*思路：
ＫＭＰ算法
next数组扩展应用
***********************************************************/


#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
using namespace std;

#define MAX_N 10000000

char str[MAX_N+5];
int nxt[MAX_N+5];
int ans[MAX_N+5];


void get_next(char *str,int *next){
	int j=-1;
	nxt[0]=-1;
	for(int i=1;str[i];i++){
		while(j!=-1  && str[j+1]!=str[i]) j=nxt[j]; 
		if(str[j+1]==str[i])  j+=1;
		nxt[i]=j;
	}
	return ;
}

int main(){
	int n;
	cin>>n;
	cin>>str;
	get_next(str,nxt);
	for(int i=0;i<n;i++){
		if(nxt[i]==-1 || i-nxt[i]!=ans[nxt[i]]){
			ans[i]=i+1;
		}else{
			ans[i]=ans[nxt[i]];
		}
	}
	for(int i=0;i<n;i++){
		if(ans[i]==i+1) continue;
		cout<<i+1<<" "<<(i+1)/ans[i]<<endl;
	}
	return 0;
}
