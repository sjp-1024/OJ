/***********************************************************
*       &Author: ShijinPeng     
*       &E-mail: 878491983@qq.com
*       &Motto: Believe in yourself.
*       &File Name: 446.cpp
*       &Created Time: 19Century 2019年08月17日 星期六 22时11分32秒 
*                          CST  Day/229 and Week/32 of this year
*       &Description:
样例输入
5
样例输出
1 1 1 1 1
1 2 2 2 1
1 2 3 2 1
1 2 2 2 1
1 1 1 1 1
***********************************************************/


#include<iostream>
using namespace std;
int main(){
    int n,i,j,l=0;
    cin>>n;
    int a[100][100]={0},m=n;

    while(l<n){
        for(i=l;i<n*2+1-l;i++)
        a[l][i]=1;
        for(i=1+l;i<n*2+1-l;i++)
        a[i][n*2+1-1-l]=m;
        for(i=n*2+1-2-l;i>=l;i--)
        a[n*2+1-1-l][i]=m;
        for(i=n*2+1-2-l;i>=1+l;i--)
        a[i][l]=1; 
        m--;
        l++;	
    }

    for(i=0;i<n*2+1;i++){
        for(j=0;j<n*2+1;j++){
            printf(" %d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}

