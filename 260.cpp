/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 260.cpp
*       &Created Time: 19Century 2019年09月01日 星期日 10时13分36秒 
*                          CST  Day/244 and Week/35 of this year
*       &Description:
*
*
***********************************************************/


#include <stdio.h>
#include <string.h>
#define  MAX_N 1000
int  t[MAX_N+5], A[MAX_N+5];
char str1[MAX_N+5], str2[MAX_N+5];
int n, m;
void solve()
{
    int i, len, k;
    len = strlen(str1);
    for(i=len; i>=0; --i) t[len-1-i] = str1[i] -(str1[i]<58 ? 48: str1[i]<97 ? 55: 61);
    for(k=0; len;) {
        for(i=len; i>=1; --i) {
            t[i-1] +=t[i]%m*n;
            t[i] /= m;
        }
        A[k++] = t[0] % m;
        t[0] /=m;
        while(len>0&&!t[len-1])  len--;
    }
    str2[k] =NULL;
    for(i=0; i<k; i++)
        str2[k-1-i] = A[i]+(A[i]<10 ? 48: A[i]<36 ? 55:61);
}

int main()
{
    int T;
//    scanf("%d",&T);
  //  while(T--) {
        scanf("%d%d%s",&n, &m, str1);
        solve();
        printf("%d %s\n%d %s\n", n, str1, m, str2);
   // }
    return 0;
}

