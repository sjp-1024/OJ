/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 101.cpp
*       &Created Time: 19Century 2019年11月21日 星期四 22时03分25秒 
*                          CST  Day/325 and Week/46 of this year
*       &Description:
***********************************************************/


#include <iostream>
using namespace std;

int main(){
	int n, sum = 0, d;
	scanf("%d", &n);

	while (n>0) {
		d =n % 10;
		sum += d;
		n /= 10;
	}

	printf("%d\n", sum);
	return 0;
}
