/*************************************************
        &Author:     
        &E-mail: 878491983@qq.com
        &Motto: Believe in yourself.
        &File Name: 176.cpp
        &Created Time: 19Century 2019年08月13日 星期二 09时53分22秒 
                           CST  Day/225 and Week/32 of this year
        &Description:


 ************************************************/


#include<iostream>
using namespace std;

int main() {
    string str, str1;
    getline(cin, str);
    getline(cin, str1);
    int ans = 0;
    int sum = 0;
    for (int i = 0; i < str.size(); i++) {
        ans = 0;
        for (int k = i, j = 0; k < i + str1.size(); k++, j++) {
            if (str[k] == str1[j]) {
                ans++;          
            } 
        } 
        if (ans == str1.size()) {
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}
