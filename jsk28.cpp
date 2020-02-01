/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: jsk28.cpp
 &Created Time: 19Century 2019年06月29日 星期六 13时29分49秒   CST  Day/180 and Week/25 of this year
 ************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[21];
    int i;
    int j;
    for(i=0;i<n;i++)
    {
        for(j=n-i;j<n;j++)
        {
            printf("%d ",a[j]);
        }
        for(j=0;j<n-i;j++)
        {
            printf("%d",i);
            if(j!=n-i-1)
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
