/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 472.cpp
*       &Created Time: 19Century 2019年10月13日 星期日 20时28分26秒 
*                          CST  Day/286 and Week/41 of this year
*       &Description:
***********************************************************/

#include <iostream>
using namespace std;
#include<cstdio>
#include<cstring>
#include<vector>
struct  BigInt {
    int operator%(int n) {
        int a = 0;
        for (int i = num.size() - 1; i >= 0; i--) {
            a = a * 10 + num[i];
            a %= n;
        }
        return a;
    }
    void operator=(string str) {
		num.clear();
		for(int i=str.size()-1;i>=0;--i){
			num.push_back(str[i]-'0');
		}
		return ;
    }
vector<int>num;
};

int main(){
	string s;
	BigInt m;
	int n;
	cin>>n>>s;
	m=s;
	cout<<m%n<<endl;
	return 0;
}
