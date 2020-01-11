/*************************************************
        &Author:     
        &E-mail: 878491983@qq.com
        &Motto: Believe in yourself.
        &File Name: 157.cpp
        &Created Time: 19Century 2019年08月11日 星期日 00时18分16秒 
                           CST  Day/223 and Week/32 of this year
        &Description:


 ************************************************/


#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        for (int j = i; j < n; j++) {
            cout << (char)('A' + j);
        }
        for (int j = n - 2; j >= i; j--) {
            cout << (char)('A' + j);
        }
        cout << endl;
    }
    for (int i = n - 2; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        for (int j = i; j < n; j++) {
            cout << (char)('A' + j);
        }
        for (int j = n - 2; j >= i; j--) {
            cout << (char)('A' + j);
        }
        cout << endl;
    }
    
    return 0;
}

