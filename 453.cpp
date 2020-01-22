/***********************************************************
* 	  &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 453.cpp
*       &Created Time: 19Century 2019年10月27日 星期日 22时30分56秒 
*                          CST  Day/300 and Week/43 of this year
*       &Description:
***********************************************************/


#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n, tp;
	cin >> n;
	vector<int> num1;
	vector<int> num2;
	for (int i = 0; i < n; ++i) {
		cin >> tp;
		num1.push_back(tp);
	}
	for (int i = 0; i < n; ++i) {
		cin >> tp;
		num2.push_back(tp);
	}
	int m;
	cin >> m;
	for (int i = 0; i < m; ++i) {
		cin >> tp;
		cout << find_kth_number(num1, num2, tp) << endl;
	}
	return 0;
}
