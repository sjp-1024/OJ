/***********************************************************
* 	  &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 510.cpp
*       &Created Time: 19Century 2019年11月07日 星期四 15时23分56秒 
*                          CST  Day/311 and Week/44 of this year
*       &Description:
***********************************************************/


#include <iostream>
using namespace std;
#define MAX_N 10000
#include <vector>
#include <set>
struct Data {
	int a, b, ind;
	bool operator<(const Data &obj) const {
		if (a - b != obj.a - obj.b)
			return (a - b) > (obj.a - obj.b);
		return ind < obj.ind;
	}
}arr[MAX_N + 5];

int dp[MAX_N + 5];

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i].a >> arr[i].b;
	    arr[i].ind = i;
	}
	set<Data> s;
	s.insert(arr[2]);
	dp[2] = arr[1].b + arr[2].a;
	for (int i = 4; i <= n; i+=2) {
		int val1 = dp[i - 2] + arr[i].a + arr[i - 1].b;
		int val2 = dp[i - 2] - s.begin()->a + 
			s.begin()->b + arr[i].a + arr[i - 1].a;
		dp[i] = min(val1, val2);
		if (val1 < val2) {
			s.insert(arr[i]);
		}else {
			s.erase(s.begin());
			s.insert(arr[i]);
			s.insert(arr[i - 1]);
		}
	}
	cout << dp[n] << endl;
	return 0;
}
