/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: 147.cpp
 &Created Time: 19Century 2019年07月11日 星期四 23时02分28秒   CST  Day/192 and Week/27 of this year
 ************************************************/

#include<iostream>
#include<string>
using namespace std;

int main() {
    string str;
    cin >> str;
    if ((str[str.size() - 1] - '0') % 2 == 0) {
        cout << "YES";
    } else
         cout << "NO";
    return 0;
}

