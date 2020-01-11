/*************************************************
        &Author:     
        &E-mail: 878491983@qq.com
        &Motto: Believe in yourself.
        &File Name: 159.cpp
        &Created Time: 19Century 2019年08月11日 星期日 00时21分56秒 
                           CST  Day/223 and Week/32 of this year
        &Description:


 ************************************************/


#include<iostream>
using namespace std;
int main() {
    char c;
    cin >> c;
    int n = (int)(c - 'A') + 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        for (int j = 0; j < n - i; j++) {
            cout << c;
            c--;
        }
        for (int j = 1; j < n - i; j++) {
            c++;
            cout << c;
        }
        cout << endl;
    }
    return 0;
}

