/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 492.cpp
*       &Created Time: 19Century 2019年10月25日 星期五 16时16分06秒 
*                          CST  Day/298 and Week/42 of this year
*       &Description:
***********************************************************/

#include<iostream>
using namespace std;
int P(int n) {
	int sum=0;
    if (n == 1) return 1;
    if (n == 2) return 2;
    if (n == 3) return 1;
    if (n & 1) 
		sum = P(n - 1);
    else 
		sum = P(n - 1) * 2 + 1;
    return sum;
}

int main() {
    int n;
    cin >> n;
    cout << P(n) << endl;
    return 0;
}
