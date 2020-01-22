/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 489_1.cpp
*       &Created Time: 19Century 2019年10月23日 星期三 14时36分38秒 
*                          CST  Day/296 and Week/42 of this year
*       &Description:
***********************************************************/



#include <iostream>
using namespace std;
#define MAX_N 1000
int  dp[MAX_N+5][2];
int main(){
    int n;
	cin>>n;
    dp[1][0]=8,dp[1][1]=1;
    for(int i=2;i<=n;i++){
        dp[i][0]=(9*dp[i-1][0])%12345+dp[i-1][1]%12345;
        dp[i][1]=(dp[i-1][1]*9)%12345+dp[i-1][0]%12345;
    }
    cout<<dp[n][0]%12345<<endl;
    return 0;
}
