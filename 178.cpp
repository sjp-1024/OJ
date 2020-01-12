/*************************************************
        &Author:     
        &E-mail: 878491983@qq.com
        &Motto: Believe in yourself.
        &File Name: 178.cpp
        &Created Time: 19Century 2019年08月13日 星期二 10时06分21秒 
                           CST  Day/225 and Week/32 of this year
        &Description:


 ************************************************/


#include<iostream>
#include <cstring>

using namespace std;
#define MAX_N 1000000
int main() {
    int n;
    cin >> n;
    char str[MAX_N + 5] = {'A'};
    for (int i = 1; i < n; i++) {
        int len = strlen(str);
        for (int j = 0, k = 2 * len; j < len; j++, k--) {
            str[k] = str[j];
        }
        str[len] = 'A' + i;
    }
    cout << str << endl;
    return 0;
}
