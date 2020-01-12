/***********************************************************
* 	  &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 177.cpp
*       &Created Time: 19Century 2019年10月26日 星期六 22时17分38秒 
*                          CST  Day/299 and Week/42 of this year
*       &Description:
***********************************************************/


#include<iostream>
using namespace std;
int main() {
    string str;
    cin >> str;
    int len = str.size();
    char str1[3];
    cout << str << endl;
    for (int i = 1; i < str.size(); i++) {
        str1[0] = str[str.size() - 2];
        str1[1] = str[str.size() - 1];
        for (int j = str.size() - 3, k = str.size() - 1; k >= 2; j--, k--) {
            str[k] = str[j];
        }
        str[0] = str1[0];
        str[1] = str1[1];
        cout << str << endl;
    }
    return 0;
}

