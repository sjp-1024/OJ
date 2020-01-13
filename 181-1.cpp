/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: 181-1.cpp
 &Created Time: 19Century 2019年07月28日 星期日 18时05分23秒   CST  Day/209 and Week/30 of this year
 ************************************************/

#include<iostream>
using namespace std;
int main()
{
    while (1)              //死循环，能够持续输入字符
    {
        char a;
        cin>>a;
        if (a >= 'A' && a <= 'Z')
        {
            a = a + 32;      //大写转小写
            cout<<a;
        }
        else if (a >= 'a' && a <= 'z')
        {
            a = a - 32;      //小写转大写
            cout<<a;
        }
        else if (a == '%')//当输入的是‘%’时，则跳出循环
            break;
    }
    return 0;
}
