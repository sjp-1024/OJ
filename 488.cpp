/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 488.cpp
*       &Created Time: 19Century 2019年10月23日 星期三 14时10分06秒 
*                          CST  Day/296 and Week/42 of this year
*       &Description:
***********************************************************/


#include<iostream>
using namespace std;
#define MAX_N 1000
int dp[MAX_N][MAX_N],dis[MAX_N][MAX_N];
int main(){
	int n;
	int a,b;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b;
	}
	dp[1][0]=1;
	dp[1][1]=2;
	for(int i=0;i<n;i++)
		if(i>1)
			dp[i][0]=dp[i-1][0]+dis[i][i-1];
	for(int i=2;i<n-1;i++)
			dp[i][1]=min(dp[i-1][i]+dis[i][i-1],dp[i-2][0]+dis[i-2][i]);
		}
	cout<<dp[n][0]<<endl;
	return 0;

}
