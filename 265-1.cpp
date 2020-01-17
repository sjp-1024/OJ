/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 265-1.cpp
*       &Created Time: 19Century 2019年09月27日 星期五 15时40分00秒 
*                          CST  Day/270 and Week/38 of this year
*       &Description:
***********************************************************/


#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <cmath>
#include <stack>
using namespace std;

int main() {
    string str;
    cin >> str;
    int ans = 0, cnt = 0;
    stack<char> s;
    for (int i = 0; str[i]; i++) {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[') {
            s.push(str[i]);
        } else {
            bool flag = 0;
            switch (str[i]) {
                case ')': {
                    if (s.empty()) break;
                    flag = (s.top() == '(');
                } break;
                case ']': {
                    if (s.empty()) break;
                    flag = (s.top() == '[');
                } break;
                case '}': {
                    if (s.empty()) break;
                    flag = (s.top() == '{');
                } break;
            }
            if (flag) {
                cnt += 2;
                ans = max(cnt, ans);
                s.pop();
            } else {
                cnt = 0;
                s.push(str[i]);
            }
        }
    }
    cout << ans << endl;
    return 0;
}
