/***********************************************************
* 	  &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 506.cpp
*       &Created Time: 19Century 2019年11月06日 星期三 21时46分04秒 
*                          CST  Day/310 and Week/44 of this year
*       &Description:
***********************************************************/


#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
#define MAX_N 2000

int T[MAX_N + 5], b[MAX_N + 5];
int main() {
	int n, x;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> x;
        T[i] = x;
		b[x] = i;
    }
	for (int i = 0; i <= MAX_N ; i++) {
		if (b[i] )  cout << b[i] << " ";
	}
	cout << endl;
    sort(T +1, T + n + 1);
	double sum, ans;
    for (int i = 1; i <= n; i++) {
		sum += T[i - 1];
		sum /= n;
		ans += sum;
		sum *= n;
	}
    printf("%0.2f\n", ans);
   // cout << ans <<endl;
    return 0;
}
