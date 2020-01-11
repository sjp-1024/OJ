/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: 160.cpp
 &Created Time: 19Century 2019年07月31日 星期三 16时47分10秒   CST  Day/212 and Week/30 of this year
 ************************************************/

#include<iostream>
#include<cmath>
using namespace std;
int main(){
	double r,h,Pi=3.14,y,s;
	cin>>r>>h;
	y=Pi*r*r+Pi*r*h;
	s=2*r*h+4*r*r+sqrt(2*r*2*r+2*r*2*r)*h;
	printf("%.2f",s+y);
	return 0;

}
