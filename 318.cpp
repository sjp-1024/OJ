/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 318.cpp
*       &Created Time: 19Century 2019年12月10日 星期二 14时33分30秒 
*                          CST  Day/344 and Week/49 of this year
*       &Description:
***********************************************************/


#include <iostream>  
#include <cstdio> 
using namespace std;
int a,b,x,y,k;
void exgcd(int a,int b) //扩展欧几里得算法模板
{
    if(b==0)////b=0，最大公约数就是a本身，赋x=1,y=0即可
    {
        x=1;
        y=0;
        return;
    }
    exgcd(b,a%b);
    k=x;
    x=y;
    y=k-a/b*y;
    return;
}
int main()
{
    cin>>a>>b;
    exgcd(a,b);
    cout<<(x+b)%b;//x有可能为负数，但负数模b还是负数，因此这么处理
}

