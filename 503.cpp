/***********************************************************
* 	  &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 503.cpp
*       &Created Time: 19Century 2019年11月05日 星期二 23时04分01秒 
*                          CST  Day/309 and Week/44 of this year
*       &Description:
***********************************************************/


#include <iostream>
#include <algorithm>
using namespace std;
#define MAX_N 30000
int arr[MAX_N + 5];
int main() {
	int T, n;
	cin >> T >> n;
	for (int i = 0; i < n; i++) 
		cin >> arr[i];
	sort(arr, arr + n);
	int l = 0, r = n - 1,ans = 0, k;
	while (l <= r) {
		if(arr[r] > (T - arr[l])){
			ans++;
			r--;
		}else {
			ans++;
			l++;
			r--;
		}
	}
	cout << ans << endl;
	return 0;
}
