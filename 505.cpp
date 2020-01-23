/***********************************************************
* 	  &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 505.cpp
*       &Created Time: 19Century 2019年11月06日 星期三 11时41分04秒 
*                          CST  Day/310 and Week/44 of this year
*       &Description:
***********************************************************/


#include <iostream>
using namespace std;
#include <algorithm>
#include <cstring>
#define MAX_N 100000
string arr[MAX_N + 5];

bool cmp(const string &a, const string &b) {
	return a + b > b + a;
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) 
		cin >> arr[i];
	sort(arr, arr + n, cmp);
	for (int i = 0; i < n; i++) {
		cout << arr[i];
	}
	cout << endl;
	return 0;
}
