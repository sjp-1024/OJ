/*************************************************
 &Author:     
 &E-mail: 878491983@qq.com
 &Motto: Believe in yourself.
 &File Name: 125.cpp
 &Created Time: 19Century 2019年08月08日 星期四 21时55分29秒   CST  Day/220 and Week/31 of this year
 &Description:

 ************************************************/



#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int h,m,s,t;
	cin>>h>>m>>s>>t;
	int t1 = h * 3600 + m * 60 + s + t;
    if (t1 >= 86400) {
        t1 -= 86400;
    }
	if (t1 < 43200) {
        if (t1 < 3600) t1 += 43200;
        cout << t1 / 3600 << ":" << t1 % 3600 / 60 << ":" << t1 % 60 << "am" << endl;
    } else {
        t1 -= 43200;
        if (t1 < 3600) {
            t1 += 43200;
        }
        cout << t1 / 3600 << ":" << t1 % 3600 / 60 << ":" << t1 % 60 << "pm" << endl;
    }
    printf("%.2lf%%\n", t / 86400.0 * 100);
    return 0;
}

