/*************************************************
 &Author:     
 &E-mail: 878491983@qq.com
 &Motto: Believe in yourself.
 &File Name: 170.cpp
 &Created Time: 19Century 2019年08月08日 星期四 22时24分22秒   CST  Day/220 and Week/31 of this year
 &Description:

 ************************************************/


#include <iostream>
#include <string>
using namespace std;
int main(){
    int n,i;
    cin >> n;
    string s[n];
    for(int i=0;i<n;i++){
        cin >> s[i];
        if(s[i].find("Ban_smoking") != string::npos){
            s[i].replace(s[i].find("Ban_smoking"),11,"No_smoking");
        }
        cout << s[i] << endl;
    }
    return 0;
}

