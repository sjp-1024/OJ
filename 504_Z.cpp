/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 504_Z.cpp
*       &Created Time: 19Century 2019年11月08日 星期五 22时24分53秒 
*                          CST  Day/312 and Week/44 of this year
*       &Description:
***********************************************************/



#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	string n;
	int s, cnt = 0 , qianlin = 0;
    cin>> n >> s;
    int len = n.size();
    if ( s == 0) {
        cout << n;
        return 0;    
    }
    while (cnt < s) {
        for (int i = 0; i < len; i++) {
            if (n[i] > n[i+1]) {    
                cnt++;
                n.erase(i, 1);
                break;
            }
            if (i == len-1) {
                cnt++;
                n.erase(i, 1);    
            }
        }    
    }
/*	len = n.size();
	for (int i = 0; i < len; i++) {
		if (n[i] == '0' )
			qianlin++;
	}*/
	
	len=n.size();
    while (n[qianlin] == '0' && qianlin < len - 1)
        qianlin++;
    for (int i = qianlin; i < len; i++)
        cout << n[i] ;
    return 0;        
}


