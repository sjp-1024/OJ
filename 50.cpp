/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 50.cpp
*       &Created Time: 19Century 2019年10月23日 星期三 14时45分48秒 
*                          CST  Day/296 and Week/42 of this year
*       &Description:
***********************************************************/


#include<iostream>
using namespace std;
#define MAX_N 100

int dp[MAX_N +5][MAX_N+5]={0};
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=0;i<=n;i++)
		for(int j=0;j<=m;j++){
			if(!i || !j) 
				dp[i][j]=0;
			else {
				dp[i][j]=dp[i][j-1]+1+dp[i-1][j-1];
				if(i==n && dp[i][j]>=m)
					cout<<j<<endl;
				return 0;
			}
		}
	return 0;
}
