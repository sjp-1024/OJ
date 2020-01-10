/*************************************************
 &Author:     
 &E-mail: 878491983@qq.com
 &Motto: Believe in yourself.
 &File Name: 144.cpp
 &Created Time: 19Century 2019年08月08日 星期四 21时57分33秒   CST  Day/220 and Week/31 of this year
 &Description:

 ************************************************/
#include<iostream>
#include<cstring>
using namespace std;


int main()
{
    char s[100];
    int i,c=0;
    cin>>s;
    for(i = 0; s[i]; i ++)
        if(s[i]=='A') c++;
    printf("%d",c);
}
