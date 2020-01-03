/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: 34.cpp
 &Created Time: 19Century 2019年07月22日 星期一 12时10分02秒   CST  Day/203 and Week/29 of this year
 ************************************************/

#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	cout<<(((n%4==0)&&(n%100!=0)||n%400==0)? 'L':'N')<<endl;
	return 0;
}
