/***********************************************************
*       &Author: ShijinPeng     
*       &E-mail: 878491983@qq.com
*       &Motto: Believe in yourself.
*       &File Name: 449.cpp
*       &Created Time: 19Century 2019年08月16日 星期五 21时44分31秒 
*                          CST  Day/228 and Week/32 of this year
*       &Description:
*       题目描述
​ 输入正整数n，输出杨辉三角的前n行。例如，n=5时，杨辉三角形如下：
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
输入
​ 一行一个正整数n，1≤ n≤ 20。
输出
​ 共n行， 第i行包含i个正整数，之间用一个空格隔开。
样例输入
5
样例输出
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
***********************************************************/

#include<iostream>
using namespace std;
int main(){
    int n;
    int i,j,a[21][21]={0};
    while(n<1 || n>20){
        scanf("%d",&n);
    }
    for(int i=0;i<n;i++){
        a[i][0]=1;
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<=n;j++)
        a[i][j]=a[i-1][j-1]+a[i-1][j];
    }
    for(int i=0;i<n;i++){
        printf("1");
        for(int j=1;j<=i;j++)
        printf( " %d",a[i][j]);
        printf("\n");
    }
    return 0;
}
