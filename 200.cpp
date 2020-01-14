/***********************************************************
*       &Author: ShijinPeng     
*       &E-mail: 878491983@qq.com
*       &Motto: Believe in yourself.
*       &File Name: 200.cpp
*       &Created Time: 19Century 2019年08月16日 星期五 19时52分20秒 
*                          CST  Day/228 and Week/32 of this year
*       &Description:
*
*
***********************************************************/




#include<iostream>
#include <cstdio>
using namespace std;

int main() {
    int N;
    cin >>N;
    double a = 4,b = 7;
    double sum = a/b;
    int c,d;

    for (int i=1;i<N;i++) {
        b = a+b;
        a = b-a;
        sum+=a/b;
    }
    c=a, d=b;
    printf("%lld/%lld\n",c,d);
    printf("%.2f\n",sum);
    return 0;
}

