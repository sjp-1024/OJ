/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 506_1.cpp
*       &Created Time: 19Century 2019年11月09日 星期六 19时16分26秒 
*                          CST  Day/313 and Week/44 of this year
*       &Description:
***********************************************************/


#include<iostream>
#include<algorithm>
using namespace std;
#define MAX_N 2000
struct Data{
    int a;
    int b;
}arr[MAX_N + 5];

bool cmp(const Data &x,const Data &y) {
    return x.b < y.b ;
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i].b;
        arr[i].a = i;
    }
    sort(arr + 1,arr + 1 + n, cmp);
	    cout<< arr[1].a;
    for (int i = 2; i <= n; i++) {
			cout << " "<<arr[i].a ;

	}
	cout << endl;
	double ans;
	for (int i = 1; i <= n; i++){
		ans += arr[i].b * (n - i);
	}
	printf("%.2f\n",ans/n);
	return 0;
}

