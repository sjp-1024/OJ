/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: 173.cpp
 &Created Time: 19Century 2019年07月08日 星期一 22时18分16秒   CST  Day/189 and Week/27 of this year
 ************************************************/
#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    char l;
    int i=0,m=0,n=0,p=0;
    while ((l=getchar())!='\n')
 
    {
        if ((l>='a'&&l<='z')||(l>='A'&&l<='Z'))
        {
            i++;
        }
        else if (l>='0'&&l<='9')
        {
            m++;
        }
        else if (l==' ')
        {
            n++;
        }
        else
            p++;
    }printf("%d %d %d %d\n",i,m,n,p);
    return 0;
}

