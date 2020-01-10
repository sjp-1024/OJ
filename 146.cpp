/*************************************************
        &Author:     
        &E-mail: 878491983@qq.com
        &Motto: Believe in yourself.
        &File Name: 146.cpp
        &Created Time: 19Century 2019年08月12日 星期一 09时55分59秒 
                           CST  Day/224 and Week/32 of this year
        &Description:
题目描述
​ 输入一个字符串，将其中所有的大写和小写字母改成该字母的下一个字母，zz 的下一个字母为 aa。

输入
​ 输入一个不包含空格的字符串。字符串长度小于 5050。

输出
​ 输出一行，为转换后的字符串。

样例输入
ABCDZ123abcdefz
样例输出
BCDEA123bcdefga

 ************************************************/


#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main(){
	char b[60];
	scanf("%s",&b);
	int len=strlen(b);
	for(int i=0;i<len;i++){
		if(b[i]=='z'){
	     	b[i]='a';
		}
		else if(b[i]=='Z'){
			b[i]='A';
		}
		else if((b[i]>='a')&&(b[i]<'z')) {
			b[i]+=1;
		}
		else if((b[i]>='A')&&(b[i]<'Z')){
			b[i]+=1;
		}
	}
	for(int i=0;i<len;i++)
		printf("%c",b[i]);
	printf("\n");
	return 0;

}
