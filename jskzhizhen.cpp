/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: jskzhizhen.cpp
 &Created Time: 19Century 2019年07月23日 星期二 20时09分59秒   CST  Day/204 and Week/29 of this year
 ************************************************/
#include <stdio.h>

int main() {
    int a = 4;
    int *p;
    p = &a;
    int **q;
    q=&p;
    printf("p in %p,q=%p\n",&p,q);
    printf("a in %p,p=%p,*q=%p\n",&a,p,*q);
    printf("a= %d,*p=%d,**q=%d\n",a,*p,**q);
    
    return 0;
}
