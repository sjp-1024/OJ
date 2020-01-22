/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 489.cpp
*       &Created Time: 19Century 2019年10月23日 星期三 14时24分18秒 
*                          CST  Day/296 and Week/42 of this year
*       &Description:
***********************************************************/


#include<iostream>
using namespace std;
#define MAX_N 1000
	long long a[MAX_N+5],b[MAX_N+5];
int main(){
	int n;
    cin>>n;
    a[1] = 9, b[1] = 1;
    for (int i = 2; i <= n; i++){
        a[i] = a[i - 1] * 9 + b[i - 1];
        b[i] = b[i - 1] * 9 + a[i - 1];
    }
    printf("%lld\n", a[n] - a[n - 1]);
	return 0;

}
