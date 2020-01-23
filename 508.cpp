/***********************************************************
* 	  &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 505.cpp
*       &Created Time: 19Century 2019年11月05日 星期二 21时55分27秒 
*                          CST  Day/309 and Week/44 of this year
*       &Description:
***********************************************************/


#include <iostream>
#include <algorithm>
using namespace std;
#define MAX_N 1000
int dp[MAX_N + 5];
int arr[MAX_N + 5];

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) 
		cin >> arr[i];
	sort(arr + 1, arr + n + 1);
	dp[1] = arr[1];
	dp[2] = arr[2];
	for (int i = 3; i <= n; i++) 
		dp[i] = min(dp[i - 1] + arr[i] + arr[1],
				dp[i -2] + arr[2] * 2 + arr[1] + arr[i]);
	cout << dp[n] << endl;
	return 0;
}
