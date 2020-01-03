/***********************************************************
*       &Author: ShijinPeng     
*       &E-mail: 878491983@qq.com
*       &Motto: Believe in yourself.
*       &File Name: 40-true.cpp
*       &Created Time: 19Century 2019年08月16日 星期五 20时53分59秒 
*                          CST  Day/228 and Week/32 of this year
*       &Description:
*
*
***********************************************************/


#include <stdio.h>

int step(int n) {
    int total;
    if (n == 1) total = 0;
    if (n == 2 || n == 3 || n == 4) total = 1;
    else total = step(n - 2) + step(n - 3);
    return total;
}

int main() {
    int n;
    scanf("%d", &n);
    int sum = step(n);
    printf("%d\n", sum);
    return 0;
}

