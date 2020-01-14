/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 194_2.cpp
*       &Created Time: 20Century 2020年01月04日 星期六 15时21分04秒 
*                          CST  Day/004 and Week/00 of this year
*       &Description:
***********************************************************/


#include <iostream>
using namespace std;
int main() {
    int n, num[100000] = {0}, s;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    cin >> s;
    for (int i = 0; i < n; i++ ){
        int f = s - num[i];
        int l = i + 1, r = n - 1;
        while (l <= r) {
            int mid = (l + r)/ 2;
            if (num[mid] == f) {
                cout << "YES" << endl;
                return 0;
            }
            if (num[mid] > f) {
                r = mid -1;
            }else {
                l = mid + 1;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}

